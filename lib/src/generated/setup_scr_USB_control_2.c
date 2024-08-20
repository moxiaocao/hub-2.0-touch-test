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



void setup_scr_USB_control_2(lv_ui *ui)
{
	//Write codes USB_control_2
	ui->USB_control_2 = lv_obj_create(NULL);
	ui->g_kb_USB_control_2 = lv_keyboard_create(ui->USB_control_2);
	lv_obj_add_event_cb(ui->g_kb_USB_control_2, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_USB_control_2, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_USB_control_2, &lv_font_Acme_Regular_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->USB_control_2, 320, 240);
	lv_obj_set_scrollbar_mode(ui->USB_control_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for USB_control_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_control_2_btn_1
	ui->USB_control_2_btn_1 = lv_btn_create(ui->USB_control_2);
	ui->USB_control_2_btn_1_label = lv_label_create(ui->USB_control_2_btn_1);
	lv_label_set_text(ui->USB_control_2_btn_1_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->USB_control_2_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->USB_control_2_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->USB_control_2_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->USB_control_2_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->USB_control_2_btn_1, 10, 10);
	lv_obj_set_size(ui->USB_control_2_btn_1, 50, 24);

	//Write style for USB_control_2_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_btn_1, lv_color_hex(0x97a1a2), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_btn_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->USB_control_2_btn_1, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->USB_control_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->USB_control_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->USB_control_2_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->USB_control_2_btn_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_control_2_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_control_2_btn_1, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_control_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_control_2_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_control_2_slider_1
	ui->USB_control_2_slider_1 = lv_slider_create(ui->USB_control_2);
	lv_slider_set_range(ui->USB_control_2_slider_1, 0, 6);
	lv_slider_set_mode(ui->USB_control_2_slider_1, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->USB_control_2_slider_1, 2, LV_ANIM_OFF);
	lv_obj_set_pos(ui->USB_control_2_slider_1, 14, 61);
	lv_obj_set_size(ui->USB_control_2_slider_1, 11, 144);

	//Write style for USB_control_2_slider_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_slider_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_slider_1, lv_color_hex(0x52524f), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_slider_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_slider_1, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->USB_control_2_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_control_2_slider_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_slider_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_slider_1, lv_color_hex(0x7db5bd), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_slider_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_slider_1, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for USB_control_2_slider_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_slider_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_slider_1, lv_color_hex(0x7fe0cc), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_slider_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_slider_1, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_control_2_sw_1
	ui->USB_control_2_sw_1 = lv_switch_create(ui->USB_control_2);
	lv_obj_set_pos(ui->USB_control_2_sw_1, 78, 70);
	lv_obj_set_size(ui->USB_control_2_sw_1, 46, 19);

	//Write style for USB_control_2_sw_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_1, 99, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_1, lv_color_hex(0x52555b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_control_2_sw_1, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_1, lv_color_hex(0x578269), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_1, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for USB_control_2_sw_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_1, lv_color_hex(0x175284), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_1, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_control_2_sw_2
	ui->USB_control_2_sw_2 = lv_switch_create(ui->USB_control_2);
	lv_obj_set_pos(ui->USB_control_2_sw_2, 210, 70);
	lv_obj_set_size(ui->USB_control_2_sw_2, 46, 19);

	//Write style for USB_control_2_sw_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_2, 99, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_2, lv_color_hex(0x52555b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_control_2_sw_2, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_2, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_2, lv_color_hex(0x578269), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_2, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for USB_control_2_sw_2, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_2, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_2, lv_color_hex(0x175284), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_2, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_2, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_control_2_sw_3
	ui->USB_control_2_sw_3 = lv_switch_create(ui->USB_control_2);
	lv_obj_set_pos(ui->USB_control_2_sw_3, 78, 135);
	lv_obj_set_size(ui->USB_control_2_sw_3, 46, 19);

	//Write style for USB_control_2_sw_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_3, 99, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_3, lv_color_hex(0x52555b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_sw_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_control_2_sw_3, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_3, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_3, lv_color_hex(0x578269), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_3, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_3, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for USB_control_2_sw_3, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_3, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_3, lv_color_hex(0x175284), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_3, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_3, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_3, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_control_2_sw_4
	ui->USB_control_2_sw_4 = lv_switch_create(ui->USB_control_2);
	lv_obj_set_pos(ui->USB_control_2_sw_4, 78, 200);
	lv_obj_set_size(ui->USB_control_2_sw_4, 46, 19);

	//Write style for USB_control_2_sw_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_4, 99, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_4, lv_color_hex(0x52555b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_sw_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_control_2_sw_4, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_4, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_4, lv_color_hex(0x578269), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_4, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for USB_control_2_sw_4, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_4, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_4, lv_color_hex(0x175284), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_4, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_4, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_4, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_control_2_sw_5
	ui->USB_control_2_sw_5 = lv_switch_create(ui->USB_control_2);
	lv_obj_set_pos(ui->USB_control_2_sw_5, 210, 135);
	lv_obj_set_size(ui->USB_control_2_sw_5, 46, 19);

	//Write style for USB_control_2_sw_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_5, 99, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_5, lv_color_hex(0x52555b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_5, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_sw_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_control_2_sw_5, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_5, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_5, lv_color_hex(0x578269), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_5, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_5, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for USB_control_2_sw_5, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_5, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_5, lv_color_hex(0x175284), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_5, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_5, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_5, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_control_2_sw_6
	ui->USB_control_2_sw_6 = lv_switch_create(ui->USB_control_2);
	lv_obj_set_pos(ui->USB_control_2_sw_6, 210, 200);
	lv_obj_set_size(ui->USB_control_2_sw_6, 46, 19);

	//Write style for USB_control_2_sw_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_6, 99, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_6, lv_color_hex(0x52555b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_6, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_sw_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_control_2_sw_6, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_6, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_6, lv_color_hex(0x578269), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_6, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_6, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for USB_control_2_sw_6, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_control_2_sw_6, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_control_2_sw_6, lv_color_hex(0x175284), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_control_2_sw_6, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_control_2_sw_6, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_sw_6, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_control_2_label_1
	ui->USB_control_2_label_1 = lv_label_create(ui->USB_control_2);
	lv_label_set_text(ui->USB_control_2_label_1, "USB1");
	lv_label_set_long_mode(ui->USB_control_2_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_control_2_label_1, 70, 46);
	lv_obj_set_size(ui->USB_control_2_label_1, 64, 32);

	//Write style for USB_control_2_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_control_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_control_2_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_control_2_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_control_2_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_control_2_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_control_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_control_2_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_control_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_control_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_control_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_control_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_control_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_control_2_label_2
	ui->USB_control_2_label_2 = lv_label_create(ui->USB_control_2);
	lv_label_set_text(ui->USB_control_2_label_2, "USB2");
	lv_label_set_long_mode(ui->USB_control_2_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_control_2_label_2, 210, 46);
	lv_obj_set_size(ui->USB_control_2_label_2, 60, 32);

	//Write style for USB_control_2_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_control_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_control_2_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_control_2_label_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_control_2_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_control_2_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_control_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_control_2_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_control_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_control_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_control_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_control_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_control_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_control_2_label_3
	ui->USB_control_2_label_3 = lv_label_create(ui->USB_control_2);
	lv_label_set_text(ui->USB_control_2_label_3, "USB3");
	lv_label_set_long_mode(ui->USB_control_2_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_control_2_label_3, 75, 115);
	lv_obj_set_size(ui->USB_control_2_label_3, 56, 32);

	//Write style for USB_control_2_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_control_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_control_2_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_control_2_label_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_control_2_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_control_2_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_control_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_control_2_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_control_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_control_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_control_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_control_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_control_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_control_2_label_4
	ui->USB_control_2_label_4 = lv_label_create(ui->USB_control_2);
	lv_label_set_text(ui->USB_control_2_label_4, "USB5");
	lv_label_set_long_mode(ui->USB_control_2_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_control_2_label_4, 75, 180);
	lv_obj_set_size(ui->USB_control_2_label_4, 55, 32);

	//Write style for USB_control_2_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_control_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_control_2_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_control_2_label_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_control_2_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_control_2_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_control_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_control_2_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_control_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_control_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_control_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_control_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_control_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_control_2_label_5
	ui->USB_control_2_label_5 = lv_label_create(ui->USB_control_2);
	lv_label_set_text(ui->USB_control_2_label_5, "USB4");
	lv_label_set_long_mode(ui->USB_control_2_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_control_2_label_5, 210, 115);
	lv_obj_set_size(ui->USB_control_2_label_5, 63, 32);

	//Write style for USB_control_2_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_control_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_control_2_label_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_control_2_label_5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_control_2_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_control_2_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_control_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_control_2_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_control_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_control_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_control_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_control_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_control_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_control_2_label_6
	ui->USB_control_2_label_6 = lv_label_create(ui->USB_control_2);
	lv_label_set_text(ui->USB_control_2_label_6, "USB6");
	lv_label_set_long_mode(ui->USB_control_2_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_control_2_label_6, 213, 180);
	lv_obj_set_size(ui->USB_control_2_label_6, 55, 32);

	//Write style for USB_control_2_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_control_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_control_2_label_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_control_2_label_6, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_control_2_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_control_2_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_control_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_control_2_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_control_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_control_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_control_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_control_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_control_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_control_2_label_7
	ui->USB_control_2_label_7 = lv_label_create(ui->USB_control_2);
	lv_label_set_text(ui->USB_control_2_label_7, "" LV_SYMBOL_OK " ");
	lv_label_set_long_mode(ui->USB_control_2_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_control_2_label_7, 8, 42);
	lv_obj_set_size(ui->USB_control_2_label_7, 33, 32);

	//Write style for USB_control_2_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_control_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_control_2_label_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_control_2_label_7, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_control_2_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_control_2_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_control_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_control_2_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_control_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_control_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_control_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_control_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_control_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_control_2_label_8
	ui->USB_control_2_label_8 = lv_label_create(ui->USB_control_2);
	lv_label_set_text(ui->USB_control_2_label_8, "" LV_SYMBOL_CLOSE " ");
	lv_label_set_long_mode(ui->USB_control_2_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_control_2_label_8, 8, 208);
	lv_obj_set_size(ui->USB_control_2_label_8, 30, 32);

	//Write style for USB_control_2_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_control_2_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_control_2_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_control_2_label_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_control_2_label_8, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_control_2_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_control_2_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_control_2_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_control_2_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_control_2_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_control_2_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_control_2_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_control_2_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_control_2_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_control_2_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of USB_control_2.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->USB_control_2);

	//Init events for screen.
	events_init_USB_control_2(ui);
}
