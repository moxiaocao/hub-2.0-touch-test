#include "five_way_switch.h"

FiveWaySwitch FWS;


void get_switch_state(int adc_value, FiveWaySwitch *sw) {
    // 检查sw指针是否为空
    if (sw == NULL) {
        // 根据你的运行环境，这里可以添加错误处理代码
        return; // 或者其他适当的错误处理
    }

    // 调用映射函数并更新开关状态
    sw->State = mapAdcToSwitchState(adc_value);
}

// 映射ADC值到开关状态

SwitchState mapAdcToSwitchState(int adc_value) {

    if(adc_value < THRESHOLD_CENTER) {
        return SWITCH_STATE_CENTER;
    } 

    else if(adc_value < THRESHOLD_LEFT) {
         return SWITCH_STATE_LEFT;
    } 

    else if(adc_value < THRESHOLD_UP) {
         return SWITCH_STATE_UP;
    }

    else if(adc_value < THRESHOLD_RIGHT) {
        return SWITCH_STATE_RIGHT;
    }

    else if(adc_value < THRESHOLD_DOWN) {     
        return SWITCH_STATE_DOWN;
    } 

    else {
        return SWITCH_STATE_INVALID;
    }
}


uint8_t Switchstate_to_LVGL(FiveWaySwitch *sw){

    switch (sw->State)
    {
        
    case SWITCH_STATE_DOWN:
        if(sw->mode == mode_lr){
            return 0;
        }
        else if(sw->mode == mode_ud_lr){
            return 4;
        }
        else if(sw->mode == mode_lr_ud_js){
            return 0;
        }
        else return 1;
        break;
    case SWITCH_STATE_UP:
        if(sw->mode == mode_lr){
            return 0;
        }
        else if(sw->mode == mode_ud_lr){
            return 3;
        }
        else if(sw->mode == mode_lr_ud_js){
            return 0;
        }
        else return 2;    
        break;
    case SWITCH_STATE_LEFT:
        if(sw->mode == mode_ud){
            return 0;
        }
        else if(sw->mode == mode_lr_ud){
            return 2;
        }
        else if(sw->mode == mode_ud_lr_js){
            return 0;
        }
        else return 3;
        break;   
    case SWITCH_STATE_RIGHT:
        if(sw->mode == mode_ud){
            return 0;
        }
        else if(sw->mode == mode_lr_ud){
            return 1;
        }
        else if(sw->mode == mode_ud_lr_js){
            return 0;
        }
        else return 4;
        break;
    case SWITCH_STATE_CENTER:
        return 5;
        break;
    default:
        return 0;
        break;
    }

}