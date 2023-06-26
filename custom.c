// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/**
 * @file custom.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/
 
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
bool ON_OFF_FLAG = false;
char FAN_SPEED   = 6;
int Temp_DISP = 26;
int mode_num = 0;
//extern SerialClass Serial; // 声明全局变量
/**
 * Create a demo application
 */

void ON_OFF_FUNC()  //  ON / OFF button 
{
    if(ON_OFF_FLAG)
    {
      ON_OFF_FLAG = false;
      IR_OFF_LAUNCH();
      lv_obj_set_style_bg_color(guider_ui.screen_btn_1, lv_color_make(0xfe, 0xfa, 0x95), LV_PART_MAIN);
      lv_obj_set_style_shadow_width(guider_ui.screen_btn_1, 0, LV_STATE_DEFAULT); // 设置按钮阴影宽度
      lv_obj_set_style_shadow_spread(guider_ui.screen_btn_1, 0, LV_STATE_DEFAULT); // 设置按钮阴影大小
    }
    else
    {
      ON_OFF_FLAG = true;
      IR_ON_LAUNCH();
      lv_obj_set_style_bg_color(guider_ui.screen_btn_1, lv_color_make(0xff, 0xfe, 0x4c), LV_PART_MAIN);
      lv_obj_set_style_shadow_color(guider_ui.screen_btn_1, lv_color_make(0xff, 0xfe, 0x4c), LV_PART_MAIN);
      lv_obj_set_style_shadow_width(guider_ui.screen_btn_1, 20, LV_STATE_DEFAULT); // 设置按钮阴影宽度
      lv_obj_set_style_shadow_spread(guider_ui.screen_btn_1, 8, LV_STATE_DEFAULT); // 设置按钮阴影大小
    }
}

void Fan_Speed_FUNC()     //set fan speed
{
  FAN_SPEED+=1;
  if(FAN_SPEED >= 8)
  {
    FAN_SPEED = 0;
  }
  switch (FAN_SPEED)
  {
    case 0: lv_label_set_text(guider_ui.screen_label_9, "*");
            break;
    case 1: lv_label_set_text(guider_ui.screen_label_9, "**");
            break;
    case 2: lv_label_set_text(guider_ui.screen_label_9, "***");
            break;
    case 3: lv_label_set_text(guider_ui.screen_label_9, "****");
            break;
    case 4: lv_label_set_text(guider_ui.screen_label_9, "*****");
            break;
    case 5: lv_label_set_text(guider_ui.screen_label_9, "POWER");
            break;
    case 6: lv_label_set_text(guider_ui.screen_label_9, "AUTO");
            break;
    case 7: lv_label_set_text(guider_ui.screen_label_9, "MUTE");
            break;
    default:lv_label_set_text(guider_ui.screen_label_9, "*");
            break;
  }
  IR_FAN_SPEED_LAUNCH(FAN_SPEED);
}

void Temperature_UP_FUNC()    // Temperature_UP button pressed
{
  char *BUF_STR = malloc(8);
  Temp_DISP = ((++Temp_DISP)>30)?30:Temp_DISP;
  sprintf(BUF_STR,"%d C",Temp_DISP);
  lv_label_set_text(guider_ui.screen_label_1, BUF_STR);
  free(BUF_STR);
  IR_Temperature_UP_DOWN_LAUNCH(Temp_DISP);
}

void Temperature_DOWN_FUNC()    //Temperature_DOWN button pressed
{
  char *BUF_STR = malloc(8);
  Temp_DISP = ((--Temp_DISP)<16)?16:Temp_DISP;
  sprintf(BUF_STR,"%d C",Temp_DISP);
  lv_label_set_text(guider_ui.screen_label_1, BUF_STR);
  free(BUF_STR);
  IR_Temperature_UP_DOWN_LAUNCH(Temp_DISP);
}

uint8_t getSum(uint8_t *data, uint8_t len) 
{
  uint8_t i, sum = 0;
  for (i = 0; i < len; i++) {
    sum += data[i];
  }
  return sum;
}

uint8_t IrSend(uint8_t *data, uint8_t group) 
{
  uint8_t *offset = data, cs;
  //帧头
  *offset++ = 0x68;
  //帧长度
  *offset++ = 0x08;
  *offset++ = 0x00;
  //模块地址
  *offset++ = 0xff;
  //功能码
  *offset++ = 0x12;
  //内码索引号，代表第几组
  *offset++ = group;
  cs = getSum(&data[3], offset - data - 3);
  *offset++ = cs;
  *offset++ = 0x16;
  return offset - data; 
}

void MODE_SWITCH_FUNC()
{
  (++mode_num)>4?0:mode_num;
  switch(mode_num)
  {
    case 0:
            lv_label_set_text(guider_ui.screen_label_5, "AUTO");
            break;
    case 1:
            lv_label_set_text(guider_ui.screen_label_5, "Cool");
            break;
    case 2:
            lv_label_set_text(guider_ui.screen_label_5, "Dehumidify");
            break;
    case 3:
            lv_label_set_text(guider_ui.screen_label_5, "Fan");
            break;
    case 4:
            lv_label_set_text(guider_ui.screen_label_5, "Heat");
            break;
    default:
            break;
  }
  IR_MODE_SWITCH_LAUNCH(mode_num);
}

void custom_init(lv_ui *ui)
{
    /* Add your codes here */ 
}
