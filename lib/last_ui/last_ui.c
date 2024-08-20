#include "last_ui.h"


usb_character usb_Char;


static float max_current[6]={1.50,1.50,0.75,0.75,0.75,0.75};//设置每一路最大电流

void set_source(usb_character *us,char num){

    us->read_source = num;

    if(us->read_source == 0){
        Input_Signal_Set(typec1);
    }
    else if(us->read_source == 1){
        Input_Signal_Set(typec2);
    }
    else ;

    
}

void get_usb_switch_ui(Usb* usb){

    if(usb->usb_pin_state[0] == 1)
        usb_Char.u1_Char = "USB1 ON";
    else usb_Char.u1_Char = "USB1 OFF";

    if(usb->usb_pin_state[1] == 1)
        usb_Char.u2_Char = "USB2 ON";
    else usb_Char.u2_Char = "USB2 OFF";

    if(usb->usb_pin_state[2] == 1)
        usb_Char.u3_Char = "USB3 ON";
    else usb_Char.u3_Char = "USB3 OFF";

    if(usb->usb_pin_state[3] == 1)
        usb_Char.u4_Char = "USB4 ON";
    else usb_Char.u4_Char = "USB4 OFF";

    if(usb->usb_pin_state[4] == 1)
        usb_Char.u5_Char = "USB5 ON";
    else usb_Char.u5_Char = "USB5 OFF";

    if(usb->usb_pin_state[5] == 1)
        usb_Char.u6_Char = "USB6 ON";
    else usb_Char.u6_Char = "USB6 OFF";


}

void get_usb_current_ui(Usb* usb){

    sprintf(usb_Char.C1_Char,"%1.2fA/%1.2fA",usb->data[0] * 3.3/4096,max_current[0]);
    sprintf(usb_Char.C2_Char,"%1.2fA/%1.2fA",usb->data[1] * 3.3/4096,max_current[1]);
    sprintf(usb_Char.C3_Char,"%1.2fA/%1.2fA",usb->data[2] * 3.3/4096,max_current[2]);
    sprintf(usb_Char.C4_Char,"%1.2fA/%1.2fA",usb->data[3] * 3.3/4096,max_current[3]);
    sprintf(usb_Char.C5_Char,"%1.2fA/%1.2fA",usb->data[4] * 3.3/4096,max_current[4]);
    sprintf(usb_Char.C6_Char,"%1.2fA/%1.2fA",usb->data[5] * 3.3/4096,max_current[5]);

    for(char i = 0;i<6;i++){
    usb_Char.Current_Percentage[i] = (uint16_t )(usb->data[i] * 3.3/4096/max_current[i]*100);
    }

}

