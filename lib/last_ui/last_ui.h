#ifndef _LAST_UI_
#define _LAST_UI_

#ifdef __cplusplus
extern "C" {
#endif

#include "..\usb_control\usb_control.h"

typedef struct 
{
    char *u1_Char;//控制->usb名称+on/off 
    char *u2_Char;
    char *u3_Char;
    char *u4_Char;
    char *u5_Char;
    char *u6_Char;
   
    char *C1_Char;//当前电流/最大电流 字符串，0.00A/0.00A
    char *C2_Char; 
    char *C3_Char;
    char *C4_Char;
    char *C5_Char;
    char *C6_Char;

    uint16_t Current_Percentage[6];//当前电流占最大电流的百分


    char read_source;//记录上行信号,0为typec1,1为typec2
}usb_character;


void set_source(usb_character *us,char num);
void get_usb_switch_ui(Usb* usb);
void get_usb_current_ui(Usb* usb);



#ifdef __cplusplus
}
#endif

#endif
