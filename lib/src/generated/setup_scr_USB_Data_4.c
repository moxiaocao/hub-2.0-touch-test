/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"




void setup_scr_USB_Data_4(lv_ui *ui)
{
	//Write codes USB_Data_4
	ui->USB_Data_4 = lv_obj_create(NULL);
	ui->g_kb_USB_Data_4 = lv_keyboard_create(ui->USB_Data_4);
	lv_obj_add_event_cb(ui->g_kb_USB_Data_4, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_USB_Data_4, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_USB_Data_4, &lv_font_Acme_Regular_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->USB_Data_4, 320, 240);
	lv_obj_set_scrollbar_mode(ui->USB_Data_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for USB_Data_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Data_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Data_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_btn_1
	ui->USB_Data_4_btn_1 = lv_btn_create(ui->USB_Data_4);
	ui->USB_Data_4_btn_1_label = lv_label_create(ui->USB_Data_4_btn_1);
	lv_label_set_text(ui->USB_Data_4_btn_1_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->USB_Data_4_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->USB_Data_4_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->USB_Data_4_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->USB_Data_4_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->USB_Data_4_btn_1, 10, 10);
	lv_obj_set_size(ui->USB_Data_4_btn_1, 50, 24);

	//Write style for USB_Data_4_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Data_4_btn_1, lv_color_hex(0x617779), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Data_4_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Data_4_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_btn_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->USB_Data_4_btn_1, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->USB_Data_4_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->USB_Data_4_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->USB_Data_4_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->USB_Data_4_btn_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_btn_1, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_arc_1
	ui->USB_Data_4_arc_1 = lv_arc_create(ui->USB_Data_4);
	lv_arc_set_mode(ui->USB_Data_4_arc_1, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->USB_Data_4_arc_1, 0, 2);
	lv_arc_set_bg_angles(ui->USB_Data_4_arc_1, 135, 45);
	lv_arc_set_value(ui->USB_Data_4_arc_1, 2);
	lv_arc_set_rotation(ui->USB_Data_4_arc_1, 0);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_1, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->USB_Data_4_arc_1, 6, 78);
	lv_obj_set_size(ui->USB_Data_4_arc_1, 163, 143);

	//Write style for USB_Data_4_arc_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Data_4_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_1, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_1, lv_color_hex(0xb6dcfc), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_arc_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_arc_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_1, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_1, lv_color_hex(0x00629c), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Data_4_arc_1, lv_color_hex(0x00629c), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Data_4_arc_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->USB_Data_4_arc_1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_arc_2
	ui->USB_Data_4_arc_2 = lv_arc_create(ui->USB_Data_4);
	lv_arc_set_mode(ui->USB_Data_4_arc_2, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->USB_Data_4_arc_2, 0, 2);
	lv_arc_set_bg_angles(ui->USB_Data_4_arc_2, 135, 45);
	lv_arc_set_value(ui->USB_Data_4_arc_2, 1);
	lv_arc_set_rotation(ui->USB_Data_4_arc_2, 0);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_2, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->USB_Data_4_arc_2, 26, 98);
	lv_obj_set_size(ui->USB_Data_4_arc_2, 102, 109);

	//Write style for USB_Data_4_arc_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Data_4_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_2, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_2, lv_color_hex(0xafab6a), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_arc_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_arc_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_2, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_2, lv_color_hex(0x00629c), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_2, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_2, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Data_4_arc_2, lv_color_hex(0x6e7306), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Data_4_arc_2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->USB_Data_4_arc_2, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_arc_3
	ui->USB_Data_4_arc_3 = lv_arc_create(ui->USB_Data_4);
	lv_arc_set_mode(ui->USB_Data_4_arc_3, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->USB_Data_4_arc_3, 0, 2);
	lv_arc_set_bg_angles(ui->USB_Data_4_arc_3, 135, 45);
	lv_arc_set_value(ui->USB_Data_4_arc_3, 1);
	lv_arc_set_rotation(ui->USB_Data_4_arc_3, 0);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_3, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->USB_Data_4_arc_3, 46, 118);
	lv_obj_set_size(ui->USB_Data_4_arc_3, 62, 69);

	//Write style for USB_Data_4_arc_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Data_4_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_3, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_3, 145, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_3, lv_color_hex(0x63a479), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_arc_3, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_arc_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_3, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_3, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_3, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_3, lv_color_hex(0x00629c), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_3, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_3, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Data_4_arc_3, lv_color_hex(0x6ca233), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Data_4_arc_3, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->USB_Data_4_arc_3, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_arc_6
	ui->USB_Data_4_arc_6 = lv_arc_create(ui->USB_Data_4);
	lv_arc_set_mode(ui->USB_Data_4_arc_6, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->USB_Data_4_arc_6, 0, 2);
	lv_arc_set_bg_angles(ui->USB_Data_4_arc_6, 135, 45);
	lv_arc_set_value(ui->USB_Data_4_arc_6, 1);
	lv_arc_set_rotation(ui->USB_Data_4_arc_6, 0);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_6, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_6, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->USB_Data_4_arc_6, 203, 118);
	lv_obj_set_size(ui->USB_Data_4_arc_6, 62, 69);

	//Write style for USB_Data_4_arc_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Data_4_arc_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_6, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_6, 145, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_6, lv_color_hex(0x63a479), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_arc_6, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_arc_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_arc_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_arc_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_arc_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_arc_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_6, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_6, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_6, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_6, lv_color_hex(0x00629c), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_6, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_6, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Data_4_arc_6, lv_color_hex(0x6ca233), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Data_4_arc_6, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->USB_Data_4_arc_6, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_arc_5
	ui->USB_Data_4_arc_5 = lv_arc_create(ui->USB_Data_4);
	lv_arc_set_mode(ui->USB_Data_4_arc_5, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->USB_Data_4_arc_5, 0, 2);
	lv_arc_set_bg_angles(ui->USB_Data_4_arc_5, 135, 45);
	lv_arc_set_value(ui->USB_Data_4_arc_5, 1);
	lv_arc_set_rotation(ui->USB_Data_4_arc_5, 0);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_5, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_5, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->USB_Data_4_arc_5, 185, 98);
	lv_obj_set_size(ui->USB_Data_4_arc_5, 102, 109);

	//Write style for USB_Data_4_arc_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Data_4_arc_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_5, lv_color_hex(0xafab6a), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_arc_5, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_arc_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_arc_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_arc_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_arc_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_arc_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_5, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_5, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_5, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_5, lv_color_hex(0x00629c), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_5, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_5, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Data_4_arc_5, lv_color_hex(0x6e7306), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Data_4_arc_5, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->USB_Data_4_arc_5, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_arc_4
	ui->USB_Data_4_arc_4 = lv_arc_create(ui->USB_Data_4);
	lv_arc_set_mode(ui->USB_Data_4_arc_4, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->USB_Data_4_arc_4, 0, 2);
	lv_arc_set_bg_angles(ui->USB_Data_4_arc_4, 135, 45);
	lv_arc_set_value(ui->USB_Data_4_arc_4, 1);
	lv_arc_set_rotation(ui->USB_Data_4_arc_4, 0);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_4, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->USB_Data_4_arc_4, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->USB_Data_4_arc_4, 166, 78);
	lv_obj_set_size(ui->USB_Data_4_arc_4, 163, 143);

	//Write style for USB_Data_4_arc_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Data_4_arc_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_4, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_4, lv_color_hex(0xb6dcfc), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_arc_4, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_arc_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_arc_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_arc_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_arc_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_arc_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_4, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->USB_Data_4_arc_4, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->USB_Data_4_arc_4, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->USB_Data_4_arc_4, lv_color_hex(0x00629c), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for USB_Data_4_arc_4, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Data_4_arc_4, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Data_4_arc_4, lv_color_hex(0x00629c), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Data_4_arc_4, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->USB_Data_4_arc_4, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_1
	ui->USB_Data_4_label_1 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_1, "1.5");
	lv_label_set_long_mode(ui->USB_Data_4_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_1, 31, 49);
	lv_obj_set_size(ui->USB_Data_4_label_1, 69, 20);

	//Write style for USB_Data_4_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_2
	ui->USB_Data_4_label_2 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_2, "0.75");
	lv_label_set_long_mode(ui->USB_Data_4_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_2, 1, 207);
	lv_obj_set_size(ui->USB_Data_4_label_2, 69, 20);

	//Write style for USB_Data_4_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_3
	ui->USB_Data_4_label_3 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_3, "0.55");
	lv_label_set_long_mode(ui->USB_Data_4_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_3, 74, 207);
	lv_obj_set_size(ui->USB_Data_4_label_3, 69, 20);

	//Write style for USB_Data_4_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_4
	ui->USB_Data_4_label_4 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_4, "1.1");
	lv_label_set_long_mode(ui->USB_Data_4_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_4, 196, 49);
	lv_obj_set_size(ui->USB_Data_4_label_4, 69, 20);

	//Write style for USB_Data_4_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_5
	ui->USB_Data_4_label_5 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_5, "0.34");
	lv_label_set_long_mode(ui->USB_Data_4_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_5, 163, 207);
	lv_obj_set_size(ui->USB_Data_4_label_5, 69, 20);

	//Write style for USB_Data_4_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_6
	ui->USB_Data_4_label_6 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_6, "0.22");
	lv_label_set_long_mode(ui->USB_Data_4_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_6, 239, 207);
	lv_obj_set_size(ui->USB_Data_4_label_6, 69, 20);

	//Write style for USB_Data_4_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_6, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_7
	ui->USB_Data_4_label_7 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_7, "A");
	lv_label_set_long_mode(ui->USB_Data_4_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_7, 68, 49);
	lv_obj_set_size(ui->USB_Data_4_label_7, 38, 32);

	//Write style for USB_Data_4_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_7, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_8
	ui->USB_Data_4_label_8 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_8, "A");
	lv_label_set_long_mode(ui->USB_Data_4_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_8, 232, 49);
	lv_obj_set_size(ui->USB_Data_4_label_8, 38, 32);

	//Write style for USB_Data_4_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_8, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_9
	ui->USB_Data_4_label_9 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_9, "A");
	lv_label_set_long_mode(ui->USB_Data_4_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_9, 46, 207);
	lv_obj_set_size(ui->USB_Data_4_label_9, 38, 32);

	//Write style for USB_Data_4_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_9, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_9, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_10
	ui->USB_Data_4_label_10 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_10, "A");
	lv_label_set_long_mode(ui->USB_Data_4_label_10, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_10, 121, 207);
	lv_obj_set_size(ui->USB_Data_4_label_10, 38, 32);

	//Write style for USB_Data_4_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_10, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_10, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_11
	ui->USB_Data_4_label_11 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_11, "A");
	lv_label_set_long_mode(ui->USB_Data_4_label_11, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_11, 218, 207);
	lv_obj_set_size(ui->USB_Data_4_label_11, 24, 32);

	//Write style for USB_Data_4_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_11, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_11, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Data_4_label_12
	ui->USB_Data_4_label_12 = lv_label_create(ui->USB_Data_4);
	lv_label_set_text(ui->USB_Data_4_label_12, "A");
	lv_label_set_long_mode(ui->USB_Data_4_label_12, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Data_4_label_12, 284, 207);
	lv_obj_set_size(ui->USB_Data_4_label_12, 38, 32);

	//Write style for USB_Data_4_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Data_4_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Data_4_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Data_4_label_12, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Data_4_label_12, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Data_4_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Data_4_label_12, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Data_4_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Data_4_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Data_4_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Data_4_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Data_4_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Data_4_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Data_4_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Data_4_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of USB_Data_4.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->USB_Data_4);

	//Init events for screen.
	events_init_USB_Data_4(ui);
}
