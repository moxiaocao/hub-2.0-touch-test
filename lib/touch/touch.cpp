#include <Arduino.h>
#include <../XPT2046_Bitbang_Slim/XPT2046_Bitbang.h>

#define MOSI_PIN 13
#define MISO_PIN 12
#define CLK_PIN  11
#define CS_PIN   7

XPT2046_Bitbang touchscreen(MOSI_PIN, MISO_PIN, CLK_PIN, CS_PIN,320,240);
TouchPoint touch;  

void touch_init(void) {
  
  touchscreen.begin();
}

void touch_scan(void) {   
    touch = touchscreen.getTouch();
  
  if (touch.zRaw != 0) {
    Serial.print("Touch at X: ");
    Serial.print(touch.x);
    Serial.print(", Y: ");
    Serial.println(touch.y);
  }

//   delay(10);  // Adjust delay as needed for responsiveness vs. serial output frequency
}
