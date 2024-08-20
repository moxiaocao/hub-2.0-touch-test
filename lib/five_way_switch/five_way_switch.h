#ifndef _FOVE_WAY_SWITCH_
#define _FOVE_WAY_SWITCH_

#ifdef __cplusplus
extern "C" {
#endif

#include <Arduino.h>
#define THRESHOLD_CENTER 700
#define THRESHOLD_LEFT 1500
#define THRESHOLD_UP 2200
#define THRESHOLD_RIGHT 3000
#define THRESHOLD_DOWN 3500



typedef enum {
    SWITCH_STATE_CENTER,
    SWITCH_STATE_LEFT,
    SWITCH_STATE_UP,
    SWITCH_STATE_RIGHT,
    SWITCH_STATE_DOWN,
    SWITCH_STATE_INVALID
}SwitchState;

typedef enum {
    mode_all,  //返回各自的值
    mode_lr,  //只返回左右，确认的值
    mode_ud,  //只返回上下，确认的值
    mode_lr_ud,  //左右映射到上下
    mode_ud_lr,   //上下映射到左右
    mode_lr_ud_js,//左右映射到上下且只返回左右的值
    mode_ud_lr_js//上下映射到左右且只返回上下的值
}Mode;

typedef struct {
    SwitchState State;
    Mode mode; 
} FiveWaySwitch;

void get_switch_state(int adc_value,FiveWaySwitch *sw);
SwitchState mapAdcToSwitchState(int adc_value);
uint8_t Switchstate_to_LVGL(FiveWaySwitch *sw);
extern FiveWaySwitch FWS;


#ifdef __cplusplus
}
#endif


#endif
