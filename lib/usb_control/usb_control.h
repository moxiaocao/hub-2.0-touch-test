#ifndef _USB_CONTROL_
#define _USB_CONTROL_

#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef enum UsbNum { USB1, USB2, USB3, USB4, USB5, USB6 }UsbNum;
typedef enum DataSource {typec1,typec2}DataSource;

typedef struct {
    char usb_pin_state[6];
    double data[6];
} Usb;

void Usb_Control_Init(Usb* usb);
void Usb_Control_Set(Usb *usb);
void Usb_Value_Get(Usb* usb);
void Input_Signal_Set(DataSource typec);



#ifdef __cplusplus
}
#endif

#endif
