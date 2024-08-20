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




void setup_scr_start_screen_1(lv_ui *ui)
{
	//Write codes start_screen_1
	ui->start_screen_1 = lv_obj_create(NULL);
	ui->g_kb_start_screen_1 = lv_keyboard_create(ui->start_screen_1);
	lv_obj_add_event_cb(ui->g_kb_start_screen_1, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_start_screen_1, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_start_screen_1, &lv_font_Acme_Regular_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->start_screen_1, 320, 240);
	lv_obj_set_scrollbar_mode(ui->start_screen_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for start_screen_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->start_screen_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->start_screen_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->start_screen_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_btn_1
	ui->start_screen_1_btn_1 = lv_btn_create(ui->start_screen_1);
	ui->start_screen_1_btn_1_label = lv_label_create(ui->start_screen_1_btn_1);
	lv_label_set_text(ui->start_screen_1_btn_1_label, "" LV_SYMBOL_USB " ");
	lv_label_set_long_mode(ui->start_screen_1_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->start_screen_1_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->start_screen_1_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->start_screen_1_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->start_screen_1_btn_1, 10, 190);
	lv_obj_set_size(ui->start_screen_1_btn_1, 63, 32);

	//Write style for start_screen_1_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->start_screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->start_screen_1_btn_1, lv_color_hex(0x009ea9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->start_screen_1_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->start_screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->start_screen_1_btn_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->start_screen_1_btn_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->start_screen_1_btn_1, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->start_screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->start_screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->start_screen_1_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->start_screen_1_btn_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->start_screen_1_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->start_screen_1_btn_1, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->start_screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->start_screen_1_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_btn_2
	ui->start_screen_1_btn_2 = lv_btn_create(ui->start_screen_1);
	ui->start_screen_1_btn_2_label = lv_label_create(ui->start_screen_1_btn_2);
	lv_label_set_text(ui->start_screen_1_btn_2_label, "" LV_SYMBOL_TINT " ");
	lv_label_set_long_mode(ui->start_screen_1_btn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->start_screen_1_btn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->start_screen_1_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->start_screen_1_btn_2_label, LV_PCT(100));
	lv_obj_set_pos(ui->start_screen_1_btn_2, 85, 190);
	lv_obj_set_size(ui->start_screen_1_btn_2, 63, 32);

	//Write style for start_screen_1_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->start_screen_1_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->start_screen_1_btn_2, lv_color_hex(0x009ea9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->start_screen_1_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->start_screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->start_screen_1_btn_2, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->start_screen_1_btn_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->start_screen_1_btn_2, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->start_screen_1_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->start_screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->start_screen_1_btn_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->start_screen_1_btn_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->start_screen_1_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->start_screen_1_btn_2, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->start_screen_1_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->start_screen_1_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_btn_3
	ui->start_screen_1_btn_3 = lv_btn_create(ui->start_screen_1);
	ui->start_screen_1_btn_3_label = lv_label_create(ui->start_screen_1_btn_3);
	lv_label_set_text(ui->start_screen_1_btn_3_label, "" LV_SYMBOL_REFRESH " ");
	lv_label_set_long_mode(ui->start_screen_1_btn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->start_screen_1_btn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->start_screen_1_btn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->start_screen_1_btn_3_label, LV_PCT(100));
	lv_obj_set_pos(ui->start_screen_1_btn_3, 176, 190);
	lv_obj_set_size(ui->start_screen_1_btn_3, 63, 32);

	//Write style for start_screen_1_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->start_screen_1_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->start_screen_1_btn_3, lv_color_hex(0x009ea9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->start_screen_1_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->start_screen_1_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->start_screen_1_btn_3, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->start_screen_1_btn_3, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->start_screen_1_btn_3, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->start_screen_1_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->start_screen_1_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->start_screen_1_btn_3, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->start_screen_1_btn_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->start_screen_1_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->start_screen_1_btn_3, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->start_screen_1_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->start_screen_1_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_btn_4
	ui->start_screen_1_btn_4 = lv_btn_create(ui->start_screen_1);
	ui->start_screen_1_btn_4_label = lv_label_create(ui->start_screen_1_btn_4);
	lv_label_set_text(ui->start_screen_1_btn_4_label, "" LV_SYMBOL_SETTINGS " ");
	lv_label_set_long_mode(ui->start_screen_1_btn_4_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->start_screen_1_btn_4_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->start_screen_1_btn_4, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->start_screen_1_btn_4_label, LV_PCT(100));
	lv_obj_set_pos(ui->start_screen_1_btn_4, 250, 190);
	lv_obj_set_size(ui->start_screen_1_btn_4, 63, 32);

	//Write style for start_screen_1_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->start_screen_1_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->start_screen_1_btn_4, lv_color_hex(0x009ea9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->start_screen_1_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->start_screen_1_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->start_screen_1_btn_4, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->start_screen_1_btn_4, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->start_screen_1_btn_4, lv_color_hex(0x0d4b3b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->start_screen_1_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->start_screen_1_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->start_screen_1_btn_4, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->start_screen_1_btn_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->start_screen_1_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->start_screen_1_btn_4, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->start_screen_1_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->start_screen_1_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_img_1
	ui->start_screen_1_img_1 = lv_img_create(ui->start_screen_1);
	lv_obj_add_flag(ui->start_screen_1_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->start_screen_1_img_1, &_weater_alpha_52x50);
	lv_img_set_pivot(ui->start_screen_1_img_1, 50,50);
	lv_img_set_angle(ui->start_screen_1_img_1, 0);
	lv_obj_set_pos(ui->start_screen_1_img_1, 15, 8);
	lv_obj_set_size(ui->start_screen_1_img_1, 52, 50);

	//Write style for start_screen_1_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->start_screen_1_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_img_2
	ui->start_screen_1_img_2 = lv_img_create(ui->start_screen_1);
	lv_obj_add_flag(ui->start_screen_1_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->start_screen_1_img_2, &_temp_alpha_52x50);
	lv_img_set_pivot(ui->start_screen_1_img_2, 50,50);
	lv_img_set_angle(ui->start_screen_1_img_2, 0);
	lv_obj_set_pos(ui->start_screen_1_img_2, 15, 128);
	lv_obj_set_size(ui->start_screen_1_img_2, 52, 50);

	//Write style for start_screen_1_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->start_screen_1_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->start_screen_1_img_2, lv_color_hex(0xa3a1a1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->start_screen_1_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_img_3
	ui->start_screen_1_img_3 = lv_img_create(ui->start_screen_1);
	lv_obj_add_flag(ui->start_screen_1_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->start_screen_1_img_3, &_gps_alpha_52x50);
	lv_img_set_pivot(ui->start_screen_1_img_3, 50,50);
	lv_img_set_angle(ui->start_screen_1_img_3, 0);
	lv_obj_set_pos(ui->start_screen_1_img_3, 15, 66);
	lv_obj_set_size(ui->start_screen_1_img_3, 52, 50);

	//Write style for start_screen_1_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->start_screen_1_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_datetext_1
	ui->start_screen_1_datetext_1 = lv_label_create(ui->start_screen_1);
	lv_label_set_text(ui->start_screen_1_datetext_1, "2024/10/01");
	lv_obj_set_style_text_align(ui->start_screen_1_datetext_1, LV_TEXT_ALIGN_CENTER, 0);
	lv_obj_add_flag(ui->start_screen_1_datetext_1, LV_OBJ_FLAG_CLICKABLE);
	lv_obj_add_event_cb(ui->start_screen_1_datetext_1, start_screen_1_datetext_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_set_pos(ui->start_screen_1_datetext_1, 174, 12);
	lv_obj_set_size(ui->start_screen_1_datetext_1, 142, 36);

	//Write style for start_screen_1_datetext_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->start_screen_1_datetext_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->start_screen_1_datetext_1, &lv_font_1_22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->start_screen_1_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->start_screen_1_datetext_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->start_screen_1_datetext_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->start_screen_1_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->start_screen_1_datetext_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->start_screen_1_datetext_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->start_screen_1_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->start_screen_1_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->start_screen_1_datetext_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->start_screen_1_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->start_screen_1_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->start_screen_1_datetext_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->start_screen_1_datetext_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->start_screen_1_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->start_screen_1_datetext_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->start_screen_1_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->start_screen_1_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_label_1
	ui->start_screen_1_label_1 = lv_label_create(ui->start_screen_1);
	lv_label_set_text(ui->start_screen_1_label_1, "多云");
	lv_label_set_long_mode(ui->start_screen_1_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->start_screen_1_label_1, 57, 25);
	lv_obj_set_size(ui->start_screen_1_label_1, 71, 55);

	//Write style for start_screen_1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->start_screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->start_screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->start_screen_1_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->start_screen_1_label_1, &lv_font_FZSTK_22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->start_screen_1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->start_screen_1_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->start_screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->start_screen_1_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->start_screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->start_screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->start_screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->start_screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->start_screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->start_screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_label_2
	ui->start_screen_1_label_2 = lv_label_create(ui->start_screen_1);
	lv_label_set_text(ui->start_screen_1_label_2, "梅州");
	lv_label_set_long_mode(ui->start_screen_1_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->start_screen_1_label_2, 63, 80);
	lv_obj_set_size(ui->start_screen_1_label_2, 65, 38);

	//Write style for start_screen_1_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->start_screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->start_screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->start_screen_1_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->start_screen_1_label_2, &lv_font_FZSTK_22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->start_screen_1_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->start_screen_1_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->start_screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->start_screen_1_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->start_screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->start_screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->start_screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->start_screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->start_screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->start_screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_label_3
	ui->start_screen_1_label_3 = lv_label_create(ui->start_screen_1);
	lv_label_set_text(ui->start_screen_1_label_3, "26");
	lv_label_set_long_mode(ui->start_screen_1_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->start_screen_1_label_3, 60, 143);
	lv_obj_set_size(ui->start_screen_1_label_3, 48, 52);

	//Write style for start_screen_1_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->start_screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->start_screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->start_screen_1_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->start_screen_1_label_3, &lv_font_FontAwesome5_22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->start_screen_1_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->start_screen_1_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->start_screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->start_screen_1_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->start_screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->start_screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->start_screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->start_screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->start_screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->start_screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_img_4
	ui->start_screen_1_img_4 = lv_img_create(ui->start_screen_1);
	lv_obj_add_flag(ui->start_screen_1_img_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->start_screen_1_img_4, &_temp2_alpha_47x42);
	lv_img_set_pivot(ui->start_screen_1_img_4, 50,50);
	lv_img_set_angle(ui->start_screen_1_img_4, 0);
	lv_obj_set_pos(ui->start_screen_1_img_4, 98, 133);
	lv_obj_set_size(ui->start_screen_1_img_4, 47, 42);

	//Write style for start_screen_1_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->start_screen_1_img_4, 249, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->start_screen_1_img_4, lv_color_hex(0x9f9f9f), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->start_screen_1_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes start_screen_1_label_4
	ui->start_screen_1_label_4 = lv_label_create(ui->start_screen_1);
	lv_label_set_text(ui->start_screen_1_label_4, "Today was great, too!");
	lv_label_set_long_mode(ui->start_screen_1_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->start_screen_1_label_4, 166, 95);
	lv_obj_set_size(ui->start_screen_1_label_4, 145, 51);

	//Write style for start_screen_1_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->start_screen_1_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->start_screen_1_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->start_screen_1_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->start_screen_1_label_4, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->start_screen_1_label_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->start_screen_1_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->start_screen_1_label_4, &lv_font_Acme_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->start_screen_1_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->start_screen_1_label_4, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->start_screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->start_screen_1_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->start_screen_1_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->start_screen_1_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->start_screen_1_label_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->start_screen_1_label_4, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->start_screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->start_screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->start_screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->start_screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of start_screen_1.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->start_screen_1);

	//Init events for screen.
	events_init_start_screen_1(ui);
}
