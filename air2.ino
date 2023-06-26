
/*******************************************************************************
   LVGL Widgets
   This is a widgets demo for LVGL - Light and Versatile Graphics Library
   import from: https://github.com/lvgl/lv_demos.git

   Dependent libraries:
   LVGL: https://github.com/lvgl/lvgl.git

   Touch libraries:
   FT6X36: https://github.com/strange-v/FT6X36.git
   GT911: https://github.com/TAMCTec/gt911-arduino.git
   XPT2046: https://github.com/PaulStoffregen/XPT2046_Touchscreen.git

   LVGL Configuration file:
   Copy your_arduino_path/libraries/lvgl/lv_conf_template.h
   to your_arduino_path/libraries/lv_conf.h
   Then find and set:
   #define LV_COLOR_DEPTH     16
   #define LV_TICK_CUSTOM     1

   For SPI display set color swap can be faster, parallel screen don't set!
   #define LV_COLOR_16_SWAP   1

   Optional: Show CPU usage and FPS count
   #define LV_USE_PERF_MONITOR 1
 ******************************************************************************/
#include "DHT.h"
#include "IR_ARRAY.h"
#include <Arduino.h>
#include <lvgl.h>
#include "events_init.h"
#include "gui_guider.h"
#include "custom.h"
//#include <demos/lv_demos.h>
//#include <examples/lv_examples.h>


/*******************************************************************************
 ******************************************************************************/
#include <Arduino_GFX_Library.h>

#define DHTPIN 38     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)

#define TFT_BL 2
#define GFX_BL DF_GFX_BL // default backlight pin, you may replace DF_GFX_BL to actual backlight pin

#define SERIAL_RX_BUFFER_SIZE 512 //修改串口发送缓冲区大小为2048
#define SERIAL_TX_BUFFER_SIZE 512 //修改串口接收缓冲区大小为2048

/* More dev device declaration: https://github.com/moononournation/Arduino_GFX/wiki/Dev-Device-Declaration */
#if defined(DISPLAY_DEV_KIT)
Arduino_GFX *lcd = create_default_Arduino_GFX();
#else /* !defined(DISPLAY_DEV_KIT) */

/* More data bus class: https://github.com/moononournation/Arduino_GFX/wiki/Data-Bus-Class */
//Arduino_DataBus *bus = create_default_Arduino_DataBus();

/* More display class: https://github.com/moononournation/Arduino_GFX/wiki/Display-Class */
//Arduino_GFX *lcd = new Arduino_ILI9341(bus, DF_GFX_RST, 0 /* rotation */, false /* IPS */);

Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
  GFX_NOT_DEFINED /* CS */, GFX_NOT_DEFINED /* SCK */, GFX_NOT_DEFINED /* SDA */,
  40 /* DE */, 41 /* VSYNC */, 39 /* HSYNC */, 0 /* PCLK */,                           
  45 /* R0 */, 48 /* R1 */, 47 /* R2 */, 21 /* R3 */, 14 /* R4 */,
  5 /* G0 */, 6 /* G1 */, 7 /* G2 */, 15 /* G3 */, 16 /* G4 */, 4 /* G5 */,
  8 /* B0 */, 3 /* B1 */, 46 /* B2 */, 9 /* B3 */, 1 /* B4 */
);
// option 1:
// ILI6485 LCD 480x272
//Arduino_RPi_DPI_RGBPanel *lcd = new Arduino_RPi_DPI_RGBPanel(
//  bus,
//  480 /* width */, 0 /* hsync_polarity */, 8 /* hsync_front_porch */, 4 /* hsync_pulse_width */, 43 /* hsync_back_porch */,
//  272 /* height */, 0 /* vsync_polarity */, 8 /* vsync_front_porch */, 4 /* vsync_pulse_width */, 12 /* vsync_back_porch */,
//  1 /* pclk_active_neg */, 7000000 /* prefer_speed */, true /* auto_flush */);

// option 2:
// ST7262 IPS LCD 800x480
 Arduino_RPi_DPI_RGBPanel *lcd = new Arduino_RPi_DPI_RGBPanel(
   bus,
   800 /* width */, 0 /* hsync_polarity */, 210 /* hsync_front_porch */, 4 /* hsync_pulse_width */, 43 /* hsync_back_porch */,
   480 /* height */, 0 /* vsync_polarity */, 22 /* vsync_front_porch */, 4 /* vsync_pulse_width */, 12 /* vsync_back_porch */,
   1 /* pclk_active_neg */, 16000000 /* prefer_speed */, true /* auto_flush */);
#endif /* !defined(DISPLAY_DEV_KIT) */
/*******************************************************************************
   End of Arduino_GFX setting
 ******************************************************************************/

DHT dht(DHTPIN, DHTTYPE);
SPIClass& spi = SPI;
uint16_t touchCalibration_x0 = 300, touchCalibration_x1 = 3600, touchCalibration_y0 = 300, touchCalibration_y1 = 3600;
uint8_t  touchCalibration_rotate = 1, touchCalibration_invert_x = 2, touchCalibration_invert_y = 0;
static int val=100;
uint8_t buf[256], len;
bool LIGHT_FLAG = false;

/*******************************************************************************
   Please config the touch panel in touch.h
 ******************************************************************************/
#include "touch.h"

//#include "GxFT5436.h"
//GxFT5436 tp =GxFT5436(37,38,3);
/* Change to your screen resolution */
static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t disp_draw_buf[800 * 480 / 10];
//static lv_color_t disp_draw_buf;
static lv_disp_drv_t disp_drv;
lv_ui guider_ui;

void IR_Cool_Mode_LAUNCH();
void IR_Heat_Mode_LAUNCH();
void IR_ON_LAUNCH();
void IR_OFF_LAUNCH();
void IR_Temperature_UP_DOWN_LAUNCH(int Temp_DISP_para);
void IR_FAN_SPEED_LAUNCH(char fan_speed);
void IR_H_SWING_LAUNCH();
void IR_V_SWING_LAUNCH();
void IR_MODE_SWITCH_LAUNCH(int mode_num_para);
void LIGHT_ON_OFF_FUNC();


//extern int Temp_DISP;


/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

#if (LV_COLOR_16_SWAP != 0)
  lcd->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#else
  lcd->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#endif

  lv_disp_flush_ready(disp);
}

void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{    
  if (touch_has_signal())
  {
    if (touch_touched())
    {
      data->state = LV_INDEV_STATE_PR;

      /*Set the coordinates*/
      data->point.x = touch_last_x;
      data->point.y = touch_last_y;
      //Serial.print( "Data x :" );
      //Serial.println( touch_last_x );
  
      //Serial.print( "Data y :" );
      //Serial.println( touch_last_y );      
    }
    else if (touch_released())
    {
      data->state = LV_INDEV_STATE_REL;
    }
  }
  else
  {
    data->state = LV_INDEV_STATE_REL;
  }
  delay(15);
}

void setup()
{
//  pinMode(TFT_BL, OUTPUT);
//  digitalWrite(TFT_BL, LOW);
  //Serial.println("LVGL Widgets Demo");
  Serial.begin(115200); 
  //IO口引脚
  pinMode(38, INPUT);
//  digitalWrite(38, LOW);
//  pinMode(17, OUTPUT);
//  digitalWrite(17, LOW);
//  pinMode(18, OUTPUT);
//  digitalWrite(18, LOW);
//  pinMode(42, OUTPUT);
//  digitalWrite(42, LOW);

  // Init Display
  lcd->begin();
  lcd->fillScreen(BLACK);
  lcd->setTextSize(2);
  delay(200);

  lv_init();

  delay(100);
  touch_init();

  screenWidth = lcd->width();
  screenHeight = lcd->height();

  lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * screenHeight / 10);
//  lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, 480 * 272 / 10);
  /* Initialize the display */
  lv_disp_drv_init(&disp_drv);
  /* Change the following line to your display resolution */
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  /* Initialize the (dummy) input device driver */
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);
#ifdef TFT_BL
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);
#endif
//  touch_calibrate();//触摸校准        
//  touch_last_x=0;
//  touch_last_y=0;

  //lcd->fillScreen(BLACK); 
  //lv_demo_widgets();//主UI界面
  //lv_demo_benchmark();          // OK

  setup_ui(&guider_ui);
  events_init(&guider_ui);
  custom_init(&guider_ui);

  LV_IMG_DECLARE(s_bear);
  lv_obj_t* avatar = lv_img_create(lv_scr_act());
  lv_img_set_src(avatar, &s_bear);
  lv_obj_set_pos(avatar, 552, 239);
  lv_img_set_antialias(avatar, true); // 开启抗锯齿
  //lv_img_set_alpha(avatar, 220); // 设置透明度，范围为0（完全透明）到255（完全不透明）

  //static lv_style_t bear_style;                     //创建样式
  //lv_style_init(&bear_style);                       //初始化样式
  //lv_style_set_bg_opa(&bear_style,LV_OPA_COVER);    //设置样式背景透明度
  //lv_style_set_bg_color(&bear_style,lv_palette_lighten(LV_PALETTE_GREY,3)); //设置样式的背景颜色
  //lv_style_set_img_recolor_opa(&bear_style,LV_OPA_20); //设置图片样式透明度
  //lv_obj_add_style(avatar,&bear_style,0);              //将样式添加到图片对象中

  dht.begin();
  lv_timer_t * DHT_timer = lv_timer_create(DHT_timer_callback, 2333, NULL);

  // 启动定时器
  //lv_timer_start(DHT_timer);
  
  //Serial.println( "Setup done" );
}

void loop()
{
  while(1)
  {
    lv_task_handler();
    delay(5);
  }
}

static void DHT_timer_callback(lv_timer_t * timer)
{
  DHT_DISP_FUNC();
}

char DHT_DISP_FUNC()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(t) || isnan(h)) 
  {
    return 0;
    //lv_label_set_text(guider_ui.screen_label_11, "ERR");
    //lv_label_set_text(guider_ui.screen_label_12, "ERR");
  } 
  else 
  {
    char *BUF_STR = (char *)malloc(16);
    sprintf(BUF_STR,"%.2f %%",h);
    lv_label_set_text(guider_ui.screen_label_11, BUF_STR);
    memset(BUF_STR,'\0',16);
    sprintf(BUF_STR,"%.2f C",t);
    lv_label_set_text(guider_ui.screen_label_12, BUF_STR);
    free(BUF_STR);
  }
}

void IR_Cool_Mode_LAUNCH()
{
  len = IrSend(buf, 4);
  Serial.write(buf, len);
  memset(buf,'\0',sizeof(buf));
}

void IR_Heat_Mode_LAUNCH()
{
  len = IrSend(buf, 5);
  Serial.write(buf, len);
  memset(buf,'\0',sizeof(buf));
}

void IR_ON_LAUNCH()
{
  len = IrSend(buf, 0);
  Serial.write(buf, len);
  memset(buf,'\0',sizeof(buf));
}

void IR_OFF_LAUNCH()
{
  len = IrSend(buf, 1);
  Serial.write(buf, len);
  memset(buf,'\0',sizeof(buf));  
}

void IR_Temperature_UP_DOWN_LAUNCH(int Temp_DISP_para)
{
  switch (Temp_DISP_para)
  {
    case 16:
            Serial.write(cool_mode_temp_16, sizeof(cool_mode_temp_16)/sizeof(uint8_t));
            break;
    case 17:
            Serial.write(cool_mode_temp_17, sizeof(cool_mode_temp_17)/sizeof(uint8_t));
            break;
    case 18:
            Serial.write(cool_mode_temp_18, sizeof(cool_mode_temp_18)/sizeof(uint8_t));
            break;
    case 19:
            Serial.write(cool_mode_temp_19, sizeof(cool_mode_temp_19)/sizeof(uint8_t));
            break;
    case 20:
            Serial.write(cool_mode_temp_20, sizeof(cool_mode_temp_20)/sizeof(uint8_t));
            break;
    case 21:
            Serial.write(cool_mode_temp_21, sizeof(cool_mode_temp_21)/sizeof(uint8_t));
            break;
    case 22:
            Serial.write(cool_mode_temp_22, sizeof(cool_mode_temp_22)/sizeof(uint8_t));
            break;
    case 23:
            Serial.write(cool_mode_temp_23, sizeof(cool_mode_temp_23)/sizeof(uint8_t));
            break;
    case 24:
            Serial.write(cool_mode_temp_24, sizeof(cool_mode_temp_24)/sizeof(uint8_t));
            break;
    case 25:
            Serial.write(cool_mode_temp_25, sizeof(cool_mode_temp_25)/sizeof(uint8_t));
            break;
    case 26:
            Serial.write(cool_mode_temp_26, sizeof(cool_mode_temp_26)/sizeof(uint8_t));
            break;
    case 27:
            Serial.write(cool_mode_temp_27, sizeof(cool_mode_temp_27)/sizeof(uint8_t));
            break;
    case 28:
            Serial.write(cool_mode_temp_28, sizeof(cool_mode_temp_28)/sizeof(uint8_t));
            break;
    case 29:
            Serial.write(cool_mode_temp_29, sizeof(cool_mode_temp_29)/sizeof(uint8_t));
            break;
    case 30:
            Serial.write(cool_mode_temp_30, sizeof(cool_mode_temp_30)/sizeof(uint8_t));
            break;
    default:
            break;
  }
}

void IR_FAN_SPEED_LAUNCH(int fan_speed)
{
  switch(fan_speed)
  {
    case 0:
            Serial.write(fan_speed_1, sizeof(fan_speed_1)/sizeof(uint8_t));
            break;
    case 1:
            Serial.write(fan_speed_2, sizeof(fan_speed_2)/sizeof(uint8_t));
            break;
    case 2:
            Serial.write(fan_speed_3, sizeof(fan_speed_4)/sizeof(uint8_t));
            break;
    case 3:
            Serial.write(fan_speed_4, sizeof(fan_speed_4)/sizeof(uint8_t));
            break;
    case 4:
            Serial.write(fan_speed_5, sizeof(fan_speed_5)/sizeof(uint8_t));
            break;
    case 5:
            Serial.write(fan_speed_power, sizeof(fan_speed_power)/sizeof(uint8_t));
            break;
    case 6:
            Serial.write(fan_speed_auto, sizeof(fan_speed_auto)/sizeof(uint8_t));
            break;
    case 7:
            Serial.write(fan_speed_mute, sizeof(fan_speed_mute)/sizeof(uint8_t));
            break;
    default:
            break;
  }
}

void IR_H_SWING_LAUNCH()
{
  Serial.write(Horizontal_Swing, sizeof(Horizontal_Swing)/sizeof(uint8_t));
}

void IR_V_SWING_LAUNCH()
{
  Serial.write(Vertical_Swing, sizeof(Vertical_Swing)/sizeof(uint8_t));
}

void LIGHT_ON_OFF_FUNC()
{
  if(LIGHT_FLAG)
  {
    LIGHT_FLAG = false;
    Serial.write(Light_OFF, sizeof(Light_OFF)/sizeof(uint8_t));
  }
  else
  {
    LIGHT_FLAG = true;
    Serial.write(Light_ON, sizeof(Light_ON)/sizeof(uint8_t));
  }
}

void IR_MODE_SWITCH_LAUNCH(int mode_num_para)
{
  switch(mode_num_para)
  {
    case 0:
            Serial.write(auto_mode, sizeof(auto_mode)/sizeof(uint8_t));
            break;
    case 1:
            Serial.write(cooling_mode, sizeof(cooling_mode)/sizeof(uint8_t));
            break;
    case 2:
            Serial.write(Dehumidification_mode, sizeof(Dehumidification_mode)/sizeof(uint8_t));
            break;
    case 3:
            Serial.write(Air_supply_mode, sizeof(Air_supply_mode)/sizeof(uint8_t));
            break;
    case 4:
            Serial.write(heating_mode, sizeof(heating_mode)/sizeof(uint8_t));
            break;
    default:
            break; 
  }
}
