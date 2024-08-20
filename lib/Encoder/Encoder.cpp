 
#include <Arduino.h>
 
#include <ESP32Encoder.h>
 
//按键配置
#define EC11_A_PIN 37
#define EC11_B_PIN 36
#define EC11_K_PIN 35
 
ESP32Encoder encoder;
extern int encoder_key;
 

void ec11_init(void)
{ 
  encoder.attachSingleEdge(EC11_A_PIN, EC11_B_PIN);
  pinMode(EC11_K_PIN, INPUT_PULLUP);
}
  
int lastEncoderValue = 0;
  
int ec11_scan(void)
{
      if (lastEncoderValue != encoder.getCount())
      {
        int now_count = encoder.getCount();
        
        if (now_count > lastEncoderValue)
        {
          //Serial.println("left");
          encoder_key=1;
        }
        else
        {
          //Serial.println("right");
          encoder_key=2;
        }
        
        lastEncoderValue = now_count;
        //Serial.print("Encoder value: ");
        //Serial.println(lastEncoderValue);
      }
    
      if (digitalRead(EC11_K_PIN) == LOW)
      {
        delay(20);
        if (digitalRead(EC11_K_PIN) == LOW) 
        {
        //Serial.println("K");
        encoder_key=3;
        }
        while (digitalRead(EC11_K_PIN) == LOW)
          ;
      }
      //Serial.println(encoder_key);
      return encoder_key;
}

