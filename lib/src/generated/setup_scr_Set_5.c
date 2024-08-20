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




void setup_scr_Set_5(lv_ui *ui)
{
	//Write codes Set_5
	ui->Set_5 = lv_obj_create(NULL);
	ui->g_kb_Set_5 = lv_keyboard_create(ui->Set_5);
	lv_obj_add_event_cb(ui->g_kb_Set_5, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_Set_5, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_Set_5, &lv_font_Acme_Regular_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->Set_5, 320, 240);
	lv_obj_set_scrollbar_mode(ui->Set_5, LV_SCROLLBAR_MODE_OFF);

	//Write style for Set_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Set_5_ta_1
	ui->Set_5_ta_1 = lv_textarea_create(ui->Set_5);
	lv_textarea_set_text(ui->Set_5_ta_1, "");
	lv_textarea_set_placeholder_text(ui->Set_5_ta_1, "name");
	lv_textarea_set_password_bullet(ui->Set_5_ta_1, "*");
	lv_textarea_set_password_mode(ui->Set_5_ta_1, false);
	lv_textarea_set_one_line(ui->Set_5_ta_1, false);
	lv_textarea_set_accepted_chars(ui->Set_5_ta_1, "");
	lv_textarea_set_max_length(ui->Set_5_ta_1, 32);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->Set_5_ta_1, ta_event_cb, LV_EVENT_ALL, ui->g_kb_Set_5);
	#endif
	lv_obj_set_pos(ui->Set_5_ta_1, 111, 34);
	lv_obj_set_size(ui->Set_5_ta_1, 175, 24);

	//Write style for Set_5_ta_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Set_5_ta_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Set_5_ta_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Set_5_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Set_5_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Set_5_ta_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Set_5_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_ta_1, lv_color_hex(0x5a6173), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_ta_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Set_5_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Set_5_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Set_5_ta_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Set_5_ta_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Set_5_ta_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Set_5_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Set_5_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Set_5_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_ta_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Set_5_ta_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5_ta_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_ta_1, lv_color_hex(0x5a6173), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_ta_1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_ta_1, 10, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Set_5_ta_2
	ui->Set_5_ta_2 = lv_textarea_create(ui->Set_5);
	lv_textarea_set_text(ui->Set_5_ta_2, "");
	lv_textarea_set_placeholder_text(ui->Set_5_ta_2, "password");
	lv_textarea_set_password_bullet(ui->Set_5_ta_2, "*");
	lv_textarea_set_password_mode(ui->Set_5_ta_2, false);
	lv_textarea_set_one_line(ui->Set_5_ta_2, false);
	lv_textarea_set_accepted_chars(ui->Set_5_ta_2, "");
	lv_textarea_set_max_length(ui->Set_5_ta_2, 32);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->Set_5_ta_2, ta_event_cb, LV_EVENT_ALL, ui->g_kb_Set_5);
	#endif
	lv_obj_set_pos(ui->Set_5_ta_2, 111, 72);
	lv_obj_set_size(ui->Set_5_ta_2, 175, 24);

	//Write style for Set_5_ta_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Set_5_ta_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Set_5_ta_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Set_5_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Set_5_ta_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Set_5_ta_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Set_5_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_ta_2, lv_color_hex(0x5a6173), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_ta_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Set_5_ta_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Set_5_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Set_5_ta_2, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Set_5_ta_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Set_5_ta_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Set_5_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Set_5_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Set_5_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_ta_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Set_5_ta_2, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5_ta_2, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_ta_2, lv_color_hex(0x5a6173), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_ta_2, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_ta_2, 10, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Set_5_btn_1
	ui->Set_5_btn_1 = lv_btn_create(ui->Set_5);
	ui->Set_5_btn_1_label = lv_label_create(ui->Set_5_btn_1);
	lv_label_set_text(ui->Set_5_btn_1_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->Set_5_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Set_5_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Set_5_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Set_5_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->Set_5_btn_1, 10, 10);
	lv_obj_set_size(ui->Set_5_btn_1, 50, 24);

	//Write style for Set_5_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_btn_1, lv_color_hex(0x617779), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Set_5_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_btn_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Set_5_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Set_5_btn_1, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Set_5_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Set_5_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Set_5_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Set_5_btn_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Set_5_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Set_5_btn_1, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Set_5_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Set_5_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Set_5_img_1
	ui->Set_5_img_1 = lv_img_create(ui->Set_5);
	lv_obj_add_flag(ui->Set_5_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Set_5_img_1, &_wifi_alpha_30x30);
	lv_img_set_pivot(ui->Set_5_img_1, 50,50);
	lv_img_set_angle(ui->Set_5_img_1, 0);
	lv_obj_set_pos(ui->Set_5_img_1, 71, 31);
	lv_obj_set_size(ui->Set_5_img_1, 30, 30);

	//Write style for Set_5_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Set_5_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Set_5_img_2
	ui->Set_5_img_2 = lv_img_create(ui->Set_5);
	lv_obj_add_flag(ui->Set_5_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Set_5_img_2, &_pass_alpha_30x30);
	lv_img_set_pivot(ui->Set_5_img_2, 50,50);
	lv_img_set_angle(ui->Set_5_img_2, 0);
	lv_obj_set_pos(ui->Set_5_img_2, 73, 69);
	lv_obj_set_size(ui->Set_5_img_2, 30, 30);

	//Write style for Set_5_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Set_5_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Set_5_slider_1
	ui->Set_5_slider_1 = lv_slider_create(ui->Set_5);
	lv_slider_set_range(ui->Set_5_slider_1, 1, 3);
	lv_slider_set_mode(ui->Set_5_slider_1, LV_SLIDER_MODE_SYMMETRICAL);
	lv_slider_set_value(ui->Set_5_slider_1, 2, LV_ANIM_OFF);
	lv_obj_set_pos(ui->Set_5_slider_1, 14, 86);
	lv_obj_set_size(ui->Set_5_slider_1, 9, 130);

	//Write style for Set_5_slider_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5_slider_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_slider_1, lv_color_hex(0x393c41), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_slider_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_slider_1, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->Set_5_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Set_5_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Set_5_slider_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5_slider_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_slider_1, lv_color_hex(0x00a0b5), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_slider_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_slider_1, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for Set_5_slider_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5_slider_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_slider_1, lv_color_hex(0xada765), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_slider_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_slider_1, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes Set_5_ta_3
	ui->Set_5_ta_3 = lv_textarea_create(ui->Set_5);
	lv_textarea_set_text(ui->Set_5_ta_3, "");
	lv_textarea_set_placeholder_text(ui->Set_5_ta_3, "location");
	lv_textarea_set_password_bullet(ui->Set_5_ta_3, "*");
	lv_textarea_set_password_mode(ui->Set_5_ta_3, false);
	lv_textarea_set_one_line(ui->Set_5_ta_3, false);
	lv_textarea_set_accepted_chars(ui->Set_5_ta_3, "");
	lv_textarea_set_max_length(ui->Set_5_ta_3, 32);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->Set_5_ta_3, ta_event_cb, LV_EVENT_ALL, ui->g_kb_Set_5);
	#endif
	lv_obj_set_pos(ui->Set_5_ta_3, 111, 110);
	lv_obj_set_size(ui->Set_5_ta_3, 175, 24);

	//Write style for Set_5_ta_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->Set_5_ta_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Set_5_ta_3, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Set_5_ta_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Set_5_ta_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Set_5_ta_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Set_5_ta_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_ta_3, lv_color_hex(0x5a6173), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_ta_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Set_5_ta_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Set_5_ta_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Set_5_ta_3, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Set_5_ta_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Set_5_ta_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Set_5_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Set_5_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Set_5_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_ta_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Set_5_ta_3, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5_ta_3, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Set_5_ta_3, lv_color_hex(0x5a6173), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Set_5_ta_3, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_ta_3, 10, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes Set_5_img_3
	ui->Set_5_img_3 = lv_img_create(ui->Set_5);
	lv_obj_add_flag(ui->Set_5_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Set_5_img_3, &_gps2_alpha_30x30);
	lv_img_set_pivot(ui->Set_5_img_3, 50,50);
	lv_img_set_angle(ui->Set_5_img_3, 0);
	lv_obj_set_pos(ui->Set_5_img_3, 73, 108);
	lv_obj_set_size(ui->Set_5_img_3, 30, 30);

	//Write style for Set_5_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Set_5_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Set_5_btn_2
	ui->Set_5_btn_2 = lv_btn_create(ui->Set_5);
	ui->Set_5_btn_2_label = lv_label_create(ui->Set_5_btn_2);
	lv_label_set_text(ui->Set_5_btn_2_label, "" LV_SYMBOL_CLOSE " ");
	lv_label_set_long_mode(ui->Set_5_btn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Set_5_btn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Set_5_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Set_5_btn_2_label, LV_PCT(100));
	lv_obj_set_pos(ui->Set_5_btn_2, 143, 185);
	lv_obj_set_size(ui->Set_5_btn_2, 64, 30);

	//Write style for Set_5_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Set_5_btn_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Set_5_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Set_5_btn_2, lv_color_hex(0x5482a9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Set_5_btn_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_btn_2, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Set_5_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Set_5_btn_2, lv_color_hex(0x12548b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Set_5_btn_2, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Set_5_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Set_5_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Set_5_btn_3
	ui->Set_5_btn_3 = lv_btn_create(ui->Set_5);
	ui->Set_5_btn_3_label = lv_label_create(ui->Set_5_btn_3);
	lv_label_set_text(ui->Set_5_btn_3_label, "" LV_SYMBOL_OK " ");
	lv_label_set_long_mode(ui->Set_5_btn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Set_5_btn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Set_5_btn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Set_5_btn_3_label, LV_PCT(100));
	lv_obj_set_pos(ui->Set_5_btn_3, 230, 185);
	lv_obj_set_size(ui->Set_5_btn_3, 64, 30);

	//Write style for Set_5_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Set_5_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Set_5_btn_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->Set_5_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->Set_5_btn_3, lv_color_hex(0x5482a9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->Set_5_btn_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Set_5_btn_3, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Set_5_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Set_5_btn_3, lv_color_hex(0x12548b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Set_5_btn_3, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Set_5_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Set_5_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Set_5.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Set_5);

	//Init events for screen.
	events_init_Set_5(ui);
}
