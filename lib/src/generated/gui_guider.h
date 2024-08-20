/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *start_screen_1;
	bool start_screen_1_del;
	lv_obj_t *g_kb_start_screen_1;
	lv_obj_t *start_screen_1_btn_1;
	lv_obj_t *start_screen_1_btn_1_label;
	lv_obj_t *start_screen_1_btn_2;
	lv_obj_t *start_screen_1_btn_2_label;
	lv_obj_t *start_screen_1_btn_3;
	lv_obj_t *start_screen_1_btn_3_label;
	lv_obj_t *start_screen_1_btn_4;
	lv_obj_t *start_screen_1_btn_4_label;
	lv_obj_t *start_screen_1_img_1;
	lv_obj_t *start_screen_1_img_2;
	lv_obj_t *start_screen_1_img_3;
	lv_obj_t *start_screen_1_datetext_1;
	lv_obj_t *start_screen_1_label_1;
	lv_obj_t *start_screen_1_label_2;
	lv_obj_t *start_screen_1_label_3;
	lv_obj_t *start_screen_1_img_4;
	lv_obj_t *start_screen_1_label_4;
	lv_obj_t *USB_control_2;
	bool USB_control_2_del;
	lv_obj_t *g_kb_USB_control_2;
	lv_obj_t *USB_control_2_btn_1;
	lv_obj_t *USB_control_2_btn_1_label;
	lv_obj_t *USB_control_2_slider_1;
	lv_obj_t *USB_control_2_sw_1;
	lv_obj_t *USB_control_2_sw_2;
	lv_obj_t *USB_control_2_sw_3;
	lv_obj_t *USB_control_2_sw_4;
	lv_obj_t *USB_control_2_sw_5;
	lv_obj_t *USB_control_2_sw_6;
	lv_obj_t *USB_control_2_label_1;
	lv_obj_t *USB_control_2_label_2;
	lv_obj_t *USB_control_2_label_3;
	lv_obj_t *USB_control_2_label_4;
	lv_obj_t *USB_control_2_label_5;
	lv_obj_t *USB_control_2_label_6;
	lv_obj_t *USB_control_2_label_7;
	lv_obj_t *USB_control_2_label_8;
	lv_obj_t *USB_Change_3;
	bool USB_Change_3_del;
	lv_obj_t *g_kb_USB_Change_3;
	lv_obj_t *USB_Change_3_btn_1;
	lv_obj_t *USB_Change_3_btn_1_label;
	lv_obj_t *USB_Change_3_sw_1;
	lv_obj_t *USB_Change_3_sw_2;
	lv_obj_t *USB_Change_3_img_1;
	lv_obj_t *USB_Change_3_img_2;
	lv_obj_t *USB_Change_3_label_1;
	lv_obj_t *USB_Change_3_label_2;
	lv_obj_t *USB_Data_4;
	bool USB_Data_4_del;
	lv_obj_t *g_kb_USB_Data_4;
	lv_obj_t *USB_Data_4_btn_1;
	lv_obj_t *USB_Data_4_btn_1_label;
	lv_obj_t *USB_Data_4_arc_1;
	lv_obj_t *USB_Data_4_arc_2;
	lv_obj_t *USB_Data_4_arc_3;
	lv_obj_t *USB_Data_4_arc_6;
	lv_obj_t *USB_Data_4_arc_5;
	lv_obj_t *USB_Data_4_arc_4;
	lv_obj_t *USB_Data_4_label_1;
	lv_obj_t *USB_Data_4_label_2;
	lv_obj_t *USB_Data_4_label_3;
	lv_obj_t *USB_Data_4_label_4;
	lv_obj_t *USB_Data_4_label_5;
	lv_obj_t *USB_Data_4_label_6;
	lv_obj_t *USB_Data_4_label_7;
	lv_obj_t *USB_Data_4_label_8;
	lv_obj_t *USB_Data_4_label_9;
	lv_obj_t *USB_Data_4_label_10;
	lv_obj_t *USB_Data_4_label_11;
	lv_obj_t *USB_Data_4_label_12;
	lv_obj_t *Set_5;
	bool Set_5_del;
	lv_obj_t *g_kb_Set_5;
	lv_obj_t *Set_5_ta_1;
	lv_obj_t *Set_5_ta_2;
	lv_obj_t *Set_5_btn_1;
	lv_obj_t *Set_5_btn_1_label;
	lv_obj_t *Set_5_img_1;
	lv_obj_t *Set_5_img_2;
	lv_obj_t *Set_5_slider_1;
	lv_obj_t *Set_5_ta_3;
	lv_obj_t *Set_5_img_3;
	lv_obj_t *Set_5_btn_2;
	lv_obj_t *Set_5_btn_2_label;
	lv_obj_t *Set_5_btn_3;
	lv_obj_t *Set_5_btn_3_label;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_move_animation(void * var, int32_t duration, int32_t delay, int32_t x_end, int32_t y_end, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_scale_animation(void * var, int32_t duration, int32_t delay, int32_t width, int32_t height, lv_anim_path_cb_t path_cb,
                        uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                        lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_zoom_animation(void * var, int32_t duration, int32_t delay, int32_t zoom, lv_anim_path_cb_t path_cb,
                           uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                           lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_rotate_animation(void * var, int32_t duration, int32_t delay, lv_coord_t x, lv_coord_t y, int32_t rotate,
                   lv_anim_path_cb_t path_cb, uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time,
                   uint32_t playback_delay, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_start_screen_1(lv_ui *ui);
void setup_scr_USB_control_2(lv_ui *ui);
void setup_scr_USB_Change_3(lv_ui *ui);
void setup_scr_USB_Data_4(lv_ui *ui);
void setup_scr_Set_5(lv_ui *ui);
LV_IMG_DECLARE(_weater_alpha_52x50);
LV_IMG_DECLARE(_temp_alpha_52x50);
LV_IMG_DECLARE(_gps_alpha_52x50);
LV_IMG_DECLARE(_temp2_alpha_47x42);
LV_IMG_DECLARE(_4_alpha_100x100);
LV_IMG_DECLARE(_4_alpha_100x100);
LV_IMG_DECLARE(_wifi_alpha_30x30);
LV_IMG_DECLARE(_pass_alpha_30x30);
LV_IMG_DECLARE(_gps2_alpha_30x30);

LV_FONT_DECLARE(lv_font_montserratMedium_18)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_1_22)
LV_FONT_DECLARE(lv_font_FZSTK_22)
LV_FONT_DECLARE(lv_font_FontAwesome5_22)
LV_FONT_DECLARE(lv_font_Acme_Regular_18)
LV_FONT_DECLARE(lv_font_Acme_Regular_12)


#ifdef __cplusplus
}
#endif
#endif
