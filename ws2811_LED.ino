#include "FastLED.h"
#define PIN 6
#define NUM_LEDS 1
CRGB leds[NUM_LEDS];//Creating an array for leds
void setup()
{
  FastLED.addLeds<WS2811,PIN,RGB>(leds,NUM_LEDS);//Initializing leds control
}
void loop()
{
  for(int j=0;j<256;j++){
    for(int i = 0;i<256;i++){
      for(int k =0;k<256;k++){
        leds[0] = CRGB(j,i,k);
        FastLED.show();
       delay(5);
      }
    }
  }


}

