/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void start_screen_1_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.USB_control_2, guider_ui.USB_control_2_del, &guider_ui.start_screen_1_del, setup_scr_USB_control_2, LV_SCR_LOAD_ANIM_FADE_ON, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void start_screen_1_btn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.USB_control_2, guider_ui.USB_control_2_del, &guider_ui.start_screen_1_del, setup_scr_USB_control_2, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.USB_Data_4, guider_ui.USB_Data_4_del, &guider_ui.start_screen_1_del, setup_scr_USB_Data_4, LV_SCR_LOAD_ANIM_FADE_ON, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void start_screen_1_btn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.USB_Change_3, guider_ui.USB_Change_3_del, &guider_ui.start_screen_1_del, setup_scr_USB_Change_3, LV_SCR_LOAD_ANIM_FADE_ON, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void start_screen_1_btn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.USB_control_2, guider_ui.USB_control_2_del, &guider_ui.start_screen_1_del, setup_scr_USB_control_2, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.Set_5, guider_ui.Set_5_del, &guider_ui.start_screen_1_del, setup_scr_Set_5, LV_SCR_LOAD_ANIM_FADE_ON, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_start_screen_1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->start_screen_1_btn_1, start_screen_1_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->start_screen_1_btn_2, start_screen_1_btn_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->start_screen_1_btn_3, start_screen_1_btn_3_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->start_screen_1_btn_4, start_screen_1_btn_4_event_handler, LV_EVENT_ALL, ui);
}
static void USB_control_2_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.start_screen_1, guider_ui.start_screen_1_del, &guider_ui.USB_control_2_del, setup_scr_start_screen_1, LV_SCR_LOAD_ANIM_FADE_ON, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void USB_control_2_sw_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	default:
		break;
	}
}
void events_init_USB_control_2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->USB_control_2_btn_1, USB_control_2_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->USB_control_2_sw_1, USB_control_2_sw_1_event_handler, LV_EVENT_ALL, ui);
}
static void USB_Change_3_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.start_screen_1, guider_ui.start_screen_1_del, &guider_ui.USB_Change_3_del, setup_scr_start_screen_1, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
		ui_load_scr_animation(&guider_ui, &guider_ui.start_screen_1, guider_ui.start_screen_1_del, &guider_ui.USB_Change_3_del, setup_scr_start_screen_1, LV_SCR_LOAD_ANIM_FADE_ON, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void USB_Change_3_sw_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	default:
		break;
	}
}
static void USB_Change_3_sw_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	default:
		break;
	}
}
void events_init_USB_Change_3(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->USB_Change_3_btn_1, USB_Change_3_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->USB_Change_3_sw_1, USB_Change_3_sw_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->USB_Change_3_sw_2, USB_Change_3_sw_2_event_handler, LV_EVENT_ALL, ui);
}
static void USB_Data_4_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.start_screen_1, guider_ui.start_screen_1_del, &guider_ui.USB_Data_4_del, setup_scr_start_screen_1, LV_SCR_LOAD_ANIM_FADE_ON, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void USB_Data_4_arc_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		
		break;
	}
	default:
		break;
	}
}
static void USB_Data_4_arc_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		
		break;
	}
	default:
		break;
	}
}
void events_init_USB_Data_4(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->USB_Data_4_btn_1, USB_Data_4_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->USB_Data_4_arc_1, USB_Data_4_arc_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->USB_Data_4_arc_4, USB_Data_4_arc_4_event_handler, LV_EVENT_ALL, ui);
}
static void Set_5_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.start_screen_1, guider_ui.start_screen_1_del, &guider_ui.Set_5_del, setup_scr_start_screen_1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void Set_5_btn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.start_screen_1, guider_ui.start_screen_1_del, &guider_ui.Set_5_del, setup_scr_start_screen_1, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void Set_5_btn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.start_screen_1, guider_ui.start_screen_1_del, &guider_ui.Set_5_del, setup_scr_start_screen_1, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_Set_5(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Set_5_btn_1, Set_5_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Set_5_btn_2, Set_5_btn_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->Set_5_btn_3, Set_5_btn_3_event_handler, LV_EVENT_ALL, ui);
}

void events_init(lv_ui *ui)
{

}
