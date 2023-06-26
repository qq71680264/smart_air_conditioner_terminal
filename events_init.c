/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"
#include <stdio.h>
#include <lvgl.h>

void events_init(lv_ui *ui)
{
}

void video_play(lv_ui *ui)
{

}

static void screen_btn_1_event_handler(lv_event_t *e)   //    ON/OFF BTN
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
      ON_OFF_FUNC();
  	}
		break;
	default:
		break;
	}
}

static void screen_btn_2_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
      MODE_SWITCH_FUNC();
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_2, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_2, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_3_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_3, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
      Fan_Speed_FUNC();
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_3, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_4_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_4, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
      Temperature_UP_FUNC();
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_4, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_5_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_5, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
      Temperature_DOWN_FUNC();
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_5, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_6_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_6, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_6, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_7_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
      LIGHT_ON_OFF_FUNC();
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_7, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_7, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_8_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
      IR_H_SWING_LAUNCH();
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_8, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_8, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_9_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
      IR_V_SWING_LAUNCH();
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_9, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_9, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_10_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_10, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_10, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_11_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_11, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
      IR_Cool_Mode_LAUNCH();
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_11, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_12_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_12, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
      IR_Heat_Mode_LAUNCH();
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_12, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

static void screen_btn_13_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
  	case LV_EVENT_PRESSED:
  	{
  		lv_obj_set_style_bg_color(guider_ui.screen_btn_13, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN);
  	}
    break;
    case LV_EVENT_RELEASED:
    {
      lv_obj_set_style_bg_color(guider_ui.screen_btn_13, lv_color_make(0x26, 0xb0, 0x8c), LV_PART_MAIN);
    }
		break;
	default:
		break;
	}
}

void events_init_screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_btn_1, screen_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_2, screen_btn_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_3, screen_btn_3_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_4, screen_btn_4_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_5, screen_btn_5_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_6, screen_btn_6_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_7, screen_btn_7_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_8, screen_btn_8_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_9, screen_btn_9_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_10, screen_btn_10_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_11, screen_btn_11_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_12, screen_btn_12_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_13, screen_btn_13_event_handler, LV_EVENT_ALL, ui);
}
