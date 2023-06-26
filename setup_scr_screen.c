/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_main_default
	static lv_style_t style_screen_main_main_default;
	if (style_screen_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_main_default);
	else
		lv_style_init(&style_screen_main_main_default);
	lv_style_set_bg_color(&style_screen_main_main_default, lv_color_make(0x4d, 0xce, 0xef));
	lv_style_set_bg_opa(&style_screen_main_main_default, 255);
	lv_obj_add_style(ui->screen, &style_screen_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_4
	ui->screen_label_4 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_4, 18, 17);
	lv_obj_set_size(ui->screen_label_4, 764, 446);
	lv_obj_set_scrollbar_mode(ui->screen_label_4, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_4, "");
	lv_label_set_long_mode(ui->screen_label_4, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_4_main_main_default
	static lv_style_t style_screen_label_4_main_main_default;
	if (style_screen_label_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_4_main_main_default);
	else
		lv_style_init(&style_screen_label_4_main_main_default);
	lv_style_set_radius(&style_screen_label_4_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_4_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_4_main_main_default, 210);
	lv_style_set_shadow_width(&style_screen_label_4_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_4_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_4_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_4_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_4_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_letter_space(&style_screen_label_4_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_4_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_4_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_label_4_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_4_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_4_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_4_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_4, &style_screen_label_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_btn_1
	ui->screen_btn_1 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_1, 42, 43);
	lv_obj_set_size(ui->screen_btn_1, 100, 100);
	lv_obj_set_scrollbar_mode(ui->screen_btn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_1_main_main_default
	static lv_style_t style_screen_btn_1_main_main_default;
	if (style_screen_btn_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_1_main_main_default);
	else
		lv_style_init(&style_screen_btn_1_main_main_default);
	lv_style_set_radius(&style_screen_btn_1_main_main_default, 360);
	lv_style_set_bg_color(&style_screen_btn_1_main_main_default, lv_color_make(0xfe, 0xfa, 0x95));
	lv_style_set_bg_grad_color(&style_screen_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_1_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_1_main_main_default, lv_color_make(0xff, 0xfe, 0x4c));
	lv_style_set_shadow_opa(&style_screen_btn_1_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_1_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_1_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_1, &style_screen_btn_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_1_label = lv_label_create(ui->screen_btn_1);
	lv_label_set_text(ui->screen_btn_1_label, "ON / OFF");
	lv_obj_set_style_pad_all(ui->screen_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_1_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_2
	ui->screen_btn_2 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_2, 313, 174);
	lv_obj_set_size(ui->screen_btn_2, 100, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_2_main_main_default
	static lv_style_t style_screen_btn_2_main_main_default;
	if (style_screen_btn_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_2_main_main_default);
	else
		lv_style_init(&style_screen_btn_2_main_main_default);
	lv_style_set_radius(&style_screen_btn_2_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_2_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_2_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_2_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_2_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_2_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_2_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_2_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_2, &style_screen_btn_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_2_label = lv_label_create(ui->screen_btn_2);
	lv_label_set_text(ui->screen_btn_2_label, "Mode");
	lv_obj_set_style_pad_all(ui->screen_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_2_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_3
	ui->screen_btn_3 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_3, 42, 174);
	lv_obj_set_size(ui->screen_btn_3, 100, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_3_main_main_default
	static lv_style_t style_screen_btn_3_main_main_default;
	if (style_screen_btn_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_3_main_main_default);
	else
		lv_style_init(&style_screen_btn_3_main_main_default);
	lv_style_set_radius(&style_screen_btn_3_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_3_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_3_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_3_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_3_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_3_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_3_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_3_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_3_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_3_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_3_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_3_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_3_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_3, &style_screen_btn_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_3_label = lv_label_create(ui->screen_btn_3);
	lv_label_set_text(ui->screen_btn_3_label, "Fan Speed");
	lv_obj_set_style_pad_all(ui->screen_btn_3, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_3_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_4
	ui->screen_btn_4 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_4, 178, 27);
	lv_obj_set_size(ui->screen_btn_4, 100, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_4, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_4_main_main_default
	static lv_style_t style_screen_btn_4_main_main_default;
	if (style_screen_btn_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_4_main_main_default);
	else
		lv_style_init(&style_screen_btn_4_main_main_default);
	lv_style_set_radius(&style_screen_btn_4_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_4_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_4_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_4_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_4_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_4_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_4_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_4_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_4_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_4_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_4_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_4_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_4_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_4, &style_screen_btn_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_4_label = lv_label_create(ui->screen_btn_4);
	lv_label_set_text(ui->screen_btn_4_label, "/\\");
	lv_obj_set_style_pad_all(ui->screen_btn_4, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_4_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_5
	ui->screen_btn_5 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_5, 178, 174);
	lv_obj_set_size(ui->screen_btn_5, 100, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_5_main_main_default
	static lv_style_t style_screen_btn_5_main_main_default;
	if (style_screen_btn_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_5_main_main_default);
	else
		lv_style_init(&style_screen_btn_5_main_main_default);
	lv_style_set_radius(&style_screen_btn_5_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_5_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_5_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_5_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_5_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_5_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_5_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_5_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_5_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_5_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_5_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_5_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_5_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_5, &style_screen_btn_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_5_label = lv_label_create(ui->screen_btn_5);
	lv_label_set_text(ui->screen_btn_5_label, "\\/");
	lv_obj_set_style_pad_all(ui->screen_btn_5, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_5_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_6
	ui->screen_btn_6 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_6, 451, 27);
	lv_obj_set_size(ui->screen_btn_6, 100, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_6_main_main_default
	static lv_style_t style_screen_btn_6_main_main_default;
	if (style_screen_btn_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_6_main_main_default);
	else
		lv_style_init(&style_screen_btn_6_main_main_default);
	lv_style_set_radius(&style_screen_btn_6_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_6_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_6_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_6_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_6_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_6_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_6_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_6_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_6_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_6_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_6_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_6_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_6_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_6, &style_screen_btn_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_6_label = lv_label_create(ui->screen_btn_6);
	lv_label_set_text(ui->screen_btn_6_label, "Timer");
	lv_obj_set_style_pad_all(ui->screen_btn_6, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_6_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_7
	ui->screen_btn_7 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_7, 451, 100);
	lv_obj_set_size(ui->screen_btn_7, 100, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_7, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_7_main_main_default
	static lv_style_t style_screen_btn_7_main_main_default;
	if (style_screen_btn_7_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_7_main_main_default);
	else
		lv_style_init(&style_screen_btn_7_main_main_default);
	lv_style_set_radius(&style_screen_btn_7_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_7_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_7_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_7_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_7_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_7_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_7_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_7_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_7_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_7_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_7_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_7_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_7_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_7, &style_screen_btn_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_7_label = lv_label_create(ui->screen_btn_7);
	lv_label_set_text(ui->screen_btn_7_label, "Light");
	lv_obj_set_style_pad_all(ui->screen_btn_7, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_7_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_8
	ui->screen_btn_8 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_8, 587, 27);
	lv_obj_set_size(ui->screen_btn_8, 180, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_8, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_8_main_main_default
	static lv_style_t style_screen_btn_8_main_main_default;
	if (style_screen_btn_8_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_8_main_main_default);
	else
		lv_style_init(&style_screen_btn_8_main_main_default);
	lv_style_set_radius(&style_screen_btn_8_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_8_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_8_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_8_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_8_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_8_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_8_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_8_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_8_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_8_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_8_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_8_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_8_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_8_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_8_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_8_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_8, &style_screen_btn_8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_8_label = lv_label_create(ui->screen_btn_8);
	lv_label_set_text(ui->screen_btn_8_label, "Horizontal Swing");
	lv_obj_set_style_pad_all(ui->screen_btn_8, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_8_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_9
	ui->screen_btn_9 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_9, 587, 100);
	lv_obj_set_size(ui->screen_btn_9, 180, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_9, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_9_main_main_default
	static lv_style_t style_screen_btn_9_main_main_default;
	if (style_screen_btn_9_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_9_main_main_default);
	else
		lv_style_init(&style_screen_btn_9_main_main_default);
	lv_style_set_radius(&style_screen_btn_9_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_9_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_9_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_9_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_9_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_9_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_9_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_9_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_9_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_9_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_9_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_9_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_9_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_9_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_9, &style_screen_btn_9_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_9_label = lv_label_create(ui->screen_btn_9);
	lv_label_set_text(ui->screen_btn_9_label, "Vertical Swing");
	lv_obj_set_style_pad_all(ui->screen_btn_9, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_9_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_10
	ui->screen_btn_10 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_10, 587, 174);
	lv_obj_set_size(ui->screen_btn_10, 180, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_10, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_10_main_main_default
	static lv_style_t style_screen_btn_10_main_main_default;
	if (style_screen_btn_10_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_10_main_main_default);
	else
		lv_style_init(&style_screen_btn_10_main_main_default);
	lv_style_set_radius(&style_screen_btn_10_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_10_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_10_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_10_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_10_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_10_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_10_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_10_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_10_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_10_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_10_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_10_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_10_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_10_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_10_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_10_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_10_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_10, &style_screen_btn_10_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_10_label = lv_label_create(ui->screen_btn_10);
	lv_label_set_text(ui->screen_btn_10_label, "Air Direction Control");
	lv_obj_set_style_pad_all(ui->screen_btn_10, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_10_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_11
	ui->screen_btn_11 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_11, 313, 27);
	lv_obj_set_size(ui->screen_btn_11, 100, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_11, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_11_main_main_default
	static lv_style_t style_screen_btn_11_main_main_default;
	if (style_screen_btn_11_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_11_main_main_default);
	else
		lv_style_init(&style_screen_btn_11_main_main_default);
	lv_style_set_radius(&style_screen_btn_11_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_11_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_11_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_11_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_11_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_11_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_11_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_11_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_11_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_11_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_11_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_11_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_11_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_11_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_11_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_11_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_11_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_11, &style_screen_btn_11_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_11_label = lv_label_create(ui->screen_btn_11);
	lv_label_set_text(ui->screen_btn_11_label, "Cooling");
	lv_obj_set_style_pad_all(ui->screen_btn_11, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_11_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_12
	ui->screen_btn_12 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_12, 313, 100);
	lv_obj_set_size(ui->screen_btn_12, 100, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_12, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_12_main_main_default
	static lv_style_t style_screen_btn_12_main_main_default;
	if (style_screen_btn_12_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_12_main_main_default);
	else
		lv_style_init(&style_screen_btn_12_main_main_default);
	lv_style_set_radius(&style_screen_btn_12_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_12_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_12_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_12_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_12_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_12_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_12_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_12_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_12_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_12_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_12_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_12_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_12_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_12_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_12_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_12_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_12_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_12, &style_screen_btn_12_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_12_label = lv_label_create(ui->screen_btn_12);
	lv_label_set_text(ui->screen_btn_12_label, "Heating");
	lv_obj_set_style_pad_all(ui->screen_btn_12, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_12_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_13
	ui->screen_btn_13 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_13, 451, 174);
	lv_obj_set_size(ui->screen_btn_13, 100, 50);
	lv_obj_set_scrollbar_mode(ui->screen_btn_13, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_13_main_main_default
	static lv_style_t style_screen_btn_13_main_main_default;
	if (style_screen_btn_13_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_13_main_main_default);
	else
		lv_style_init(&style_screen_btn_13_main_main_default);
	lv_style_set_radius(&style_screen_btn_13_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_13_main_main_default, lv_color_make(0x26, 0xB0, 0x8C));
	lv_style_set_bg_grad_color(&style_screen_btn_13_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_13_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_13_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_13_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_13_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_13_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_13_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_13_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_13_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_13_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_13_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_13_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_13_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_13_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_13_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_13, &style_screen_btn_13_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_13_label = lv_label_create(ui->screen_btn_13);
	lv_label_set_text(ui->screen_btn_13_label, "Sleep");
	lv_obj_set_style_pad_all(ui->screen_btn_13, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_13_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_label_1
	ui->screen_label_1 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_1, 179, 100);
	lv_obj_set_size(ui->screen_label_1, 99, 50);
	lv_obj_set_scrollbar_mode(ui->screen_label_1, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_1, "26 C");
	lv_label_set_long_mode(ui->screen_label_1, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_1_main_main_default
	static lv_style_t style_screen_label_1_main_main_default;
	if (style_screen_label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_1_main_main_default);
	else
		lv_style_init(&style_screen_label_1_main_main_default);
	lv_style_set_radius(&style_screen_label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_1_main_main_default, lv_color_make(0xFB, 0xFB, 0x24));
	lv_style_set_bg_grad_color(&style_screen_label_1_main_main_default, lv_color_make(0x2c,0xfa,0xad));//(0x94, 0xec, 0xc9));
	lv_style_set_bg_grad_dir(&style_screen_label_1_main_main_default, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_screen_label_1_main_main_default, 230);
	lv_style_set_shadow_width(&style_screen_label_1_main_main_default, 20);
	lv_style_set_shadow_color(&style_screen_label_1_main_main_default, lv_color_make(0x02, 0xcc, 0xff));
	lv_style_set_shadow_opa(&style_screen_label_1_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_1_main_main_default, 3);
	lv_style_set_shadow_ofs_x(&style_screen_label_1_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_1_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_label_1_main_main_default, &lv_font_montserratMedium_25);
	lv_style_set_text_letter_space(&style_screen_label_1_main_main_default, 1);
	lv_style_set_text_line_space(&style_screen_label_1_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_1_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_1_main_main_default, 15);
	lv_style_set_pad_bottom(&style_screen_label_1_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_1, &style_screen_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_2
	ui->screen_label_2 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_2, 25, 411);
	lv_obj_set_size(ui->screen_label_2, 288, 37);
	lv_obj_set_scrollbar_mode(ui->screen_label_2, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_2, "Room Temperature: ");
	lv_label_set_long_mode(ui->screen_label_2, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_2_main_main_default
	static lv_style_t style_screen_label_2_main_main_default;
	if (style_screen_label_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_2_main_main_default);
	else
		lv_style_init(&style_screen_label_2_main_main_default);
	lv_style_set_radius(&style_screen_label_2_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_2_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_2_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_2_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_2_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_2_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_2_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_2_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_2_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_2_main_main_default, &lv_font_montserratMedium_25);
	lv_style_set_text_letter_space(&style_screen_label_2_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_2_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_2_main_main_default, LV_TEXT_ALIGN_RIGHT);
	lv_style_set_pad_left(&style_screen_label_2_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_2_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_2_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_2_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_2, &style_screen_label_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_3
	ui->screen_label_3 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_3, 25, 368);
	lv_obj_set_size(ui->screen_label_3, 288, 37);
	lv_obj_set_scrollbar_mode(ui->screen_label_3, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_3, "Room humidity: ");
	lv_label_set_long_mode(ui->screen_label_3, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_3_main_main_default
	static lv_style_t style_screen_label_3_main_main_default;
	if (style_screen_label_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_3_main_main_default);
	else
		lv_style_init(&style_screen_label_3_main_main_default);
	lv_style_set_radius(&style_screen_label_3_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_3_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_3_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_3_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_3_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_3_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_3_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_3_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_3_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_3_main_main_default, &lv_font_montserratMedium_25);
	lv_style_set_text_letter_space(&style_screen_label_3_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_3_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_3_main_main_default, LV_TEXT_ALIGN_RIGHT);
	lv_style_set_pad_left(&style_screen_label_3_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_3_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_3_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_3_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_3, &style_screen_label_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_5
	ui->screen_label_5 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_5, 334, 239);
	lv_obj_set_size(ui->screen_label_5, 140, 32);
	lv_obj_set_scrollbar_mode(ui->screen_label_5, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_5, "AUTO");
	lv_label_set_long_mode(ui->screen_label_5, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_5_main_main_default
	static lv_style_t style_screen_label_5_main_main_default;
	if (style_screen_label_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_5_main_main_default);
	else
		lv_style_init(&style_screen_label_5_main_main_default);
	lv_style_set_radius(&style_screen_label_5_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_5_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_5_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_5_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_5_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_5_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_5_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_5_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_5_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_5_main_main_default, &lv_font_montserratMedium_25);
	lv_style_set_text_letter_space(&style_screen_label_5_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_5_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_5_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_screen_label_5_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_5_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_5_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_5_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_5, &style_screen_label_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_6
	ui->screen_label_6 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_6, 25, 234);
	lv_obj_set_size(ui->screen_label_6, 288, 37);
	lv_obj_set_scrollbar_mode(ui->screen_label_6, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_6, "Current Mode: ");
	lv_label_set_long_mode(ui->screen_label_6, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_6_main_main_default
	static lv_style_t style_screen_label_6_main_main_default;
	if (style_screen_label_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_6_main_main_default);
	else
		lv_style_init(&style_screen_label_6_main_main_default);
	lv_style_set_radius(&style_screen_label_6_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_6_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_6_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_6_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_6_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_6_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_6_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_6_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_6_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_6_main_main_default, &lv_font_montserratMedium_25);
	lv_style_set_text_letter_space(&style_screen_label_6_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_6_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_6_main_main_default, LV_TEXT_ALIGN_RIGHT);
	lv_style_set_pad_left(&style_screen_label_6_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_6_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_6_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_6_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_6, &style_screen_label_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_7
	ui->screen_label_7 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_7, 25, 277);
	lv_obj_set_size(ui->screen_label_7, 288, 37);
	lv_obj_set_scrollbar_mode(ui->screen_label_7, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_7, "Current Fan Speed: ");
	lv_label_set_long_mode(ui->screen_label_7, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_7_main_main_default
	static lv_style_t style_screen_label_7_main_main_default;
	if (style_screen_label_7_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_7_main_main_default);
	else
		lv_style_init(&style_screen_label_7_main_main_default);
	lv_style_set_radius(&style_screen_label_7_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_7_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_bg_grad_color(&style_screen_label_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_7_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_7_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_7_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_7_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_7_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_7_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_7_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_7_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_7_main_main_default, &lv_font_montserratMedium_25);
	lv_style_set_text_letter_space(&style_screen_label_7_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_7_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_7_main_main_default, LV_TEXT_ALIGN_RIGHT);
	lv_style_set_pad_left(&style_screen_label_7_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_7_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_7_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_7_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_7, &style_screen_label_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_8
	ui->screen_label_8 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_8, 25, 325);
	lv_obj_set_size(ui->screen_label_8, 288, 37);
	lv_obj_set_scrollbar_mode(ui->screen_label_8, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_8, "Timer Setting: ");
	lv_label_set_long_mode(ui->screen_label_8, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_8_main_main_default
	static lv_style_t style_screen_label_8_main_main_default;
	if (style_screen_label_8_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_8_main_main_default);
	else
		lv_style_init(&style_screen_label_8_main_main_default);
	lv_style_set_radius(&style_screen_label_8_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_8_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_bg_grad_color(&style_screen_label_8_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_8_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_8_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_8_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_8_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_8_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_8_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_8_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_8_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_8_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_8_main_main_default, &lv_font_montserratMedium_25);
	lv_style_set_text_letter_space(&style_screen_label_8_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_8_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_8_main_main_default, LV_TEXT_ALIGN_RIGHT);
	lv_style_set_pad_left(&style_screen_label_8_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_8_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_8_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_8_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_8, &style_screen_label_8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_9
	ui->screen_label_9 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_9, 334, 282);
	lv_obj_set_size(ui->screen_label_9, 140, 32);
	lv_obj_set_scrollbar_mode(ui->screen_label_9, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_9, "AUTO");
	lv_label_set_long_mode(ui->screen_label_9, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_9_main_main_default
	static lv_style_t style_screen_label_9_main_main_default;
	if (style_screen_label_9_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_9_main_main_default);
	else
		lv_style_init(&style_screen_label_9_main_main_default);
	lv_style_set_radius(&style_screen_label_9_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_9_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_9_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_9_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_9_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_9_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_9_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_9_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_9_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_9_main_main_default, &lv_font_montserratMedium_25);
	lv_style_set_text_letter_space(&style_screen_label_9_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_9_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_9_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_screen_label_9_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_9_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_9_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_9_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_9, &style_screen_label_9_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_10
	ui->screen_label_10 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_10, 334, 330);
	lv_obj_set_size(ui->screen_label_10, 140, 32);
	lv_obj_set_scrollbar_mode(ui->screen_label_10, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_10, "---");
	lv_label_set_long_mode(ui->screen_label_10, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_10_main_main_default
	static lv_style_t style_screen_label_10_main_main_default;
	if (style_screen_label_10_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_10_main_main_default);
	else
		lv_style_init(&style_screen_label_10_main_main_default);
	lv_style_set_radius(&style_screen_label_10_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_10_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_bg_grad_color(&style_screen_label_10_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_10_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_10_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_10_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_10_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_10_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_10_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_10_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_10_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_10_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_10_main_main_default, &lv_font_montserratMedium_30);
	lv_style_set_text_letter_space(&style_screen_label_10_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_10_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_10_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_screen_label_10_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_10_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_10_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_label_10_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_10, &style_screen_label_10_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_11
	ui->screen_label_11 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_11, 334, 373);
	lv_obj_set_size(ui->screen_label_11, 140, 32);
	lv_obj_set_scrollbar_mode(ui->screen_label_11, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_11, "---");
	lv_label_set_long_mode(ui->screen_label_11, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_11_main_main_default
	static lv_style_t style_screen_label_11_main_main_default;
	if (style_screen_label_11_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_11_main_main_default);
	else
		lv_style_init(&style_screen_label_11_main_main_default);
	lv_style_set_radius(&style_screen_label_11_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_11_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_11_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_11_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_11_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_11_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_11_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_11_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_11_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_11_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_11_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_11_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_11_main_main_default, &lv_font_montserratMedium_30);
	lv_style_set_text_letter_space(&style_screen_label_11_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_11_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_11_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_screen_label_11_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_11_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_11_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_label_11_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_11, &style_screen_label_11_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_12
	ui->screen_label_12 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_12, 334, 416);
	lv_obj_set_size(ui->screen_label_12, 140, 32);
	lv_obj_set_scrollbar_mode(ui->screen_label_12, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_12, "---");
	lv_label_set_long_mode(ui->screen_label_12, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_12_main_main_default
	static lv_style_t style_screen_label_12_main_main_default;
	if (style_screen_label_12_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_12_main_main_default);
	else
		lv_style_init(&style_screen_label_12_main_main_default);
	lv_style_set_radius(&style_screen_label_12_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_12_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_12_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_12_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_12_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_12_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_12_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_12_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_12_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_12_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_12_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_12_main_main_default, lv_color_make(0x2F, 0x92, 0xDA));
	lv_style_set_text_font(&style_screen_label_12_main_main_default, &lv_font_montserratMedium_30);
	lv_style_set_text_letter_space(&style_screen_label_12_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_12_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_12_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_screen_label_12_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_12_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_12_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_label_12_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_12, &style_screen_label_12_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_screen(ui);
}
