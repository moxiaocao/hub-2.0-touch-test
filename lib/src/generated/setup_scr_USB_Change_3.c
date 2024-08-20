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




void setup_scr_USB_Change_3(lv_ui *ui)
{
	//Write codes USB_Change_3
	ui->USB_Change_3 = lv_obj_create(NULL);
	ui->g_kb_USB_Change_3 = lv_keyboard_create(ui->USB_Change_3);
	lv_obj_add_event_cb(ui->g_kb_USB_Change_3, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_USB_Change_3, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_USB_Change_3, &lv_font_Acme_Regular_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->USB_Change_3, 320, 240);
	lv_obj_set_scrollbar_mode(ui->USB_Change_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for USB_Change_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Change_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Change_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Change_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Change_3_btn_1
	ui->USB_Change_3_btn_1 = lv_btn_create(ui->USB_Change_3);
	ui->USB_Change_3_btn_1_label = lv_label_create(ui->USB_Change_3_btn_1);
	lv_label_set_text(ui->USB_Change_3_btn_1_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->USB_Change_3_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->USB_Change_3_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->USB_Change_3_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->USB_Change_3_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->USB_Change_3_btn_1, 10, 10);
	lv_obj_set_size(ui->USB_Change_3_btn_1, 50, 24);

	//Write style for USB_Change_3_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Change_3_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Change_3_btn_1, lv_color_hex(0x617779), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Change_3_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Change_3_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Change_3_btn_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Change_3_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->USB_Change_3_btn_1, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->USB_Change_3_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->USB_Change_3_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->USB_Change_3_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->USB_Change_3_btn_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Change_3_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Change_3_btn_1, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Change_3_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Change_3_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Change_3_sw_1
	ui->USB_Change_3_sw_1 = lv_switch_create(ui->USB_Change_3);
	lv_obj_set_pos(ui->USB_Change_3_sw_1, 79, 175);
	lv_obj_set_size(ui->USB_Change_3_sw_1, 40, 20);

	//Write style for USB_Change_3_sw_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Change_3_sw_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Change_3_sw_1, lv_color_hex(0x41485a), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Change_3_sw_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Change_3_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Change_3_sw_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Change_3_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_Change_3_sw_1, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->USB_Change_3_sw_1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->USB_Change_3_sw_1, lv_color_hex(0x01a2b1), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->USB_Change_3_sw_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->USB_Change_3_sw_1, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for USB_Change_3_sw_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Change_3_sw_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Change_3_sw_1, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Change_3_sw_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Change_3_sw_1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Change_3_sw_1, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_Change_3_sw_2
	ui->USB_Change_3_sw_2 = lv_switch_create(ui->USB_Change_3);
	lv_obj_set_pos(ui->USB_Change_3_sw_2, 198, 175);
	lv_obj_set_size(ui->USB_Change_3_sw_2, 40, 20);

	//Write style for USB_Change_3_sw_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Change_3_sw_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Change_3_sw_2, lv_color_hex(0x41485a), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Change_3_sw_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Change_3_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Change_3_sw_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Change_3_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for USB_Change_3_sw_2, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->USB_Change_3_sw_2, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->USB_Change_3_sw_2, lv_color_hex(0x01a2b1), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->USB_Change_3_sw_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->USB_Change_3_sw_2, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for USB_Change_3_sw_2, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->USB_Change_3_sw_2, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->USB_Change_3_sw_2, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->USB_Change_3_sw_2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->USB_Change_3_sw_2, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Change_3_sw_2, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes USB_Change_3_img_1
	ui->USB_Change_3_img_1 = lv_img_create(ui->USB_Change_3);
	lv_obj_add_flag(ui->USB_Change_3_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->USB_Change_3_img_1, &_4_alpha_100x100);
	lv_img_set_pivot(ui->USB_Change_3_img_1, 50,50);
	lv_img_set_angle(ui->USB_Change_3_img_1, 0);
	lv_obj_set_pos(ui->USB_Change_3_img_1, 49, 51);
	lv_obj_set_size(ui->USB_Change_3_img_1, 100, 100);

	//Write style for USB_Change_3_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->USB_Change_3_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Change_3_img_2
	ui->USB_Change_3_img_2 = lv_img_create(ui->USB_Change_3);
	lv_obj_add_flag(ui->USB_Change_3_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->USB_Change_3_img_2, &_4_alpha_100x100);
	lv_img_set_pivot(ui->USB_Change_3_img_2, 50,50);
	lv_img_set_angle(ui->USB_Change_3_img_2, 0);
	lv_obj_set_pos(ui->USB_Change_3_img_2, 168, 51);
	lv_obj_set_size(ui->USB_Change_3_img_2, 100, 100);

	//Write style for USB_Change_3_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->USB_Change_3_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Change_3_label_1
	ui->USB_Change_3_label_1 = lv_label_create(ui->USB_Change_3);
	lv_label_set_text(ui->USB_Change_3_label_1, "USB A");
	lv_label_set_long_mode(ui->USB_Change_3_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Change_3_label_1, 53, 138);
	lv_obj_set_size(ui->USB_Change_3_label_1, 100, 32);

	//Write style for USB_Change_3_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Change_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Change_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Change_3_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Change_3_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Change_3_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Change_3_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Change_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Change_3_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Change_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Change_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Change_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Change_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Change_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Change_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes USB_Change_3_label_2
	ui->USB_Change_3_label_2 = lv_label_create(ui->USB_Change_3);
	lv_label_set_text(ui->USB_Change_3_label_2, "USB B");
	lv_label_set_long_mode(ui->USB_Change_3_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->USB_Change_3_label_2, 171, 138);
	lv_obj_set_size(ui->USB_Change_3_label_2, 100, 32);

	//Write style for USB_Change_3_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->USB_Change_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->USB_Change_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->USB_Change_3_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->USB_Change_3_label_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->USB_Change_3_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->USB_Change_3_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->USB_Change_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->USB_Change_3_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->USB_Change_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->USB_Change_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->USB_Change_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->USB_Change_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->USB_Change_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->USB_Change_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of USB_Change_3.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->USB_Change_3);

	//Init events for screen.
	events_init_USB_Change_3(ui);
}
