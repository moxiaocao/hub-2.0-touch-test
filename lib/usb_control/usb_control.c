#include <usb_control.h>

Usb usba;

const int usb_pins[] = {9,10,12,13,14,11};//usb1-6(右边开始为USB1)
const int usb_adc_pins[] = {4,5,7,15,16,6};//usb_adc1-6(右边开始为USB1的数据)
const int typec_pins[] = {47,48};//ch442e_EN,ch442_IN



void Usb_Control_Set(Usb *usb) {

    for(int i = 0;i<6;i++){
        if(usb->usb_pin_state[i] == 1){
            digitalWrite(usb_pins[i], HIGH);
        }
        else{
            digitalWrite(usb_pins[i], LOW);
    }       
    }   

}


void Usb_Value_Get(Usb* usb){
    for(char i =0;i<6;i++){

        if(usb->usb_pin_state[i] == 1){
            usb->data[i] = analogRead(usb_pins[i]);
        }
        else usb->data[i] = 0;
    }
}

void Input_Signal_Set(DataSource typec)
{
    switch (typec)
    {
    case typec1:
        digitalWrite(typec_pins[0], LOW);
        digitalWrite(typec_pins[1], HIGH);
        break;
    case typec2:
        digitalWrite(typec_pins[0], LOW);
        digitalWrite(typec_pins[1], LOW);
        break;
    }
}
void Usb_Control_Init(Usb* usb) { 

    for (int i = 0; i < 6; i++) {
        pinMode(usb_pins[i], OUTPUT);
        pinMode(usb_adc_pins[i], INPUT);
        usb->usb_pin_state[i] = 0;
    }

    Usb_Control_Set(&usba);

    /*******EN下拉使能，IN下拉S1X组上拉S2X组******/
    for (int i = 0; i < 2; i++) {
        pinMode(typec_pins[i], OUTPUT);
        digitalWrite(typec_pins[i], LOW);
    }

}

