#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS 1
#define DATA_PIN 23

CRGB leds[NUM_LEDS];

void setup()
{
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop()
{
  leds[0] = CRGB(255, 0, 0); // 显示红色
  FastLED.show();
  delay(1000);

  leds[0] = CRGB(255, 128, 0); // 显示橙色
  FastLED.show();
  delay(1000);

  leds[0] = CRGB(255, 255, 0); // 显示黄色
  FastLED.show();
  delay(1000);

  leds[0] = CRGB(0, 255, 0); // 显示绿色
  FastLED.show();
  delay(1000);

  leds[0] = CRGB(0, 255, 255); // 显示青色
  FastLED.show();
  delay(1000);

  leds[0] = CRGB(0, 0, 255); // 显示蓝色
  FastLED.show();
  delay(1000);

  leds[0] = CRGB(128, 0, 255); // 显示紫色
  FastLED.show();
  delay(1000);
}
