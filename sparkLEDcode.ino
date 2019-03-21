
#include <bitswap.h>
#include <fastspi_types.h>
#include <pixelset.h>
#include <fastled_progmem.h>
#include <led_sysdefs.h>
#include <hsv2rgb.h>
#include <fastled_delay.h>
#include <colorpalettes.h>
#include <color.h>
#include <fastspi_ref.h>
#include <fastspi_bitbang.h>
#include <controller.h>
#include <fastled_config.h>
#include <colorutils.h>
#include <chipsets.h>
#include <pixeltypes.h>
#include <fastspi_dma.h>
#include <fastpin.h>
#include <fastspi_nop.h>
#include <platforms.h>
#include <lib8tion.h>
#include <cpp_compat.h>
#include <fastspi.h>
#include <FastLED.h>
#include <dmx.h>
#include <power_mgt.h>


CRGB leds[100];

void setup() { 
  FastLED.addLeds<NEOPIXEL, 13>(leds, 100); 
  }

void loop() {
  whiteZero();
  blueOne();
  whiteZero();
  blueOne();
  whiteZero();
  blueZero();
  whiteOne();
  blueOne();

  whiteZero();
  blueOne();
  whiteOne();
  blueOne();
  whiteZero();
  blueZero();
  whiteZero();
  blueZero();

  whiteZero();
  blueOne();
  whiteOne();
  blueZero();
  whiteZero();
  blueZero();
  whiteZero();
  blueOne();

  whiteZero();
  blueOne();
  whiteOne();
  blueOne();
  whiteZero();
  blueZero();
  whiteOne();
  blueZero();

  whiteZero();
  blueOne();
  whiteOne();
  blueZero();
  whiteOne();
  blueZero();
  whiteOne();
  blueOne();

  whiteZero();
  blueZero();
  whiteOne();
  blueZero();
  whiteZero();
  blueZero();
  whiteZero();
  blueOne();
              
  }
  
void blueOne() {
  leds[15] = CRGB::Teal; FastLED.show();
  leds[14] = CRGB::Teal; FastLED.show();
  leds[24] = CRGB::Teal; FastLED.show();
  leds[25] = CRGB::Teal; FastLED.show();
  leds[35] = CRGB::Teal; FastLED.show();
  leds[34] = CRGB::Teal; FastLED.show();
  leds[44] = CRGB::Teal; FastLED.show();
  leds[45] = CRGB::Teal; FastLED.show();
  leds[55] = CRGB::Teal; FastLED.show();
  leds[54] = CRGB::Teal; FastLED.show();
  leds[64] = CRGB::Teal; FastLED.show();
  leds[65] = CRGB::Teal; FastLED.show();
  leds[75] = CRGB::Teal; FastLED.show();
  leds[74] = CRGB::Teal; FastLED.show();
  leds[84] = CRGB::Teal; FastLED.show();
  leds[85] = CRGB::Teal; FastLED.show();
  delay(500);
  leds[15] = CRGB::Black; FastLED.show();
  leds[14] = CRGB::Black; FastLED.show();
  leds[24] = CRGB::Black; FastLED.show();
  leds[25] = CRGB::Black; FastLED.show();
  leds[35] = CRGB::Black; FastLED.show();
  leds[34] = CRGB::Black; FastLED.show();
  leds[44] = CRGB::Black; FastLED.show();
  leds[45] = CRGB::Black; FastLED.show();
  leds[55] = CRGB::Black; FastLED.show();
  leds[54] = CRGB::Black; FastLED.show();
  leds[64] = CRGB::Black; FastLED.show();
  leds[65] = CRGB::Black; FastLED.show();
  leds[75] = CRGB::Black; FastLED.show();
  leds[74] = CRGB::Black; FastLED.show();
  leds[84] = CRGB::Black; FastLED.show();
  leds[85] = CRGB::Black; FastLED.show();
}

void blueZero(){
  leds[15] = CRGB::Teal; FastLED.show();
  leds[14] = CRGB::Teal; FastLED.show();
  leds[23] = CRGB::Teal; FastLED.show();
  leds[26] = CRGB::Teal; FastLED.show();
  leds[36] = CRGB::Teal; FastLED.show();
  leds[33] = CRGB::Teal; FastLED.show();
  leds[43] = CRGB::Teal; FastLED.show();
  leds[46] = CRGB::Teal; FastLED.show();
  leds[56] = CRGB::Teal; FastLED.show();
  leds[53] = CRGB::Teal; FastLED.show();
  leds[63] = CRGB::Teal; FastLED.show();
  leds[66] = CRGB::Teal; FastLED.show();
  leds[76] = CRGB::Teal; FastLED.show();
  leds[73] = CRGB::Teal; FastLED.show();
  leds[84] = CRGB::Teal; FastLED.show();
  leds[85] = CRGB::Teal; FastLED.show();
  delay(500);
  leds[15] = CRGB::Black; FastLED.show();
  leds[14] = CRGB::Black; FastLED.show();
  leds[23] = CRGB::Black; FastLED.show();
  leds[26] = CRGB::Black; FastLED.show();
  leds[36] = CRGB::Black; FastLED.show();
  leds[33] = CRGB::Black; FastLED.show();
  leds[43] = CRGB::Black; FastLED.show();
  leds[46] = CRGB::Black; FastLED.show();
  leds[56] = CRGB::Black; FastLED.show();
  leds[53] = CRGB::Black; FastLED.show();
  leds[63] = CRGB::Black; FastLED.show();
  leds[66] = CRGB::Black; FastLED.show();
  leds[76] = CRGB::Black; FastLED.show();
  leds[73] = CRGB::Black; FastLED.show();
  leds[84] = CRGB::Black; FastLED.show();
  leds[85] = CRGB::Black; FastLED.show();
  }
void whiteOne(){
  leds[15] = CRGB::White; FastLED.show();
  leds[14] = CRGB::White; FastLED.show();
  leds[24] = CRGB::White; FastLED.show();
  leds[25] = CRGB::White; FastLED.show();
  leds[35] = CRGB::White; FastLED.show();
  leds[34] = CRGB::White; FastLED.show();
  leds[44] = CRGB::White; FastLED.show();
  leds[45] = CRGB::White; FastLED.show();
  leds[55] = CRGB::White; FastLED.show();
  leds[54] = CRGB::White; FastLED.show();
  leds[64] = CRGB::White; FastLED.show();
  leds[65] = CRGB::White; FastLED.show();
  leds[75] = CRGB::White; FastLED.show();
  leds[74] = CRGB::White; FastLED.show();
  leds[84] = CRGB::White; FastLED.show();
  leds[85] = CRGB::White; FastLED.show();
  delay(500);
  leds[15] = CRGB::Black; FastLED.show();
  leds[14] = CRGB::Black; FastLED.show();
  leds[24] = CRGB::Black; FastLED.show();
  leds[25] = CRGB::Black; FastLED.show();
  leds[35] = CRGB::Black; FastLED.show();
  leds[34] = CRGB::Black; FastLED.show();
  leds[44] = CRGB::Black; FastLED.show();
  leds[45] = CRGB::Black; FastLED.show();
  leds[55] = CRGB::Black; FastLED.show();
  leds[54] = CRGB::Black; FastLED.show();
  leds[64] = CRGB::Black; FastLED.show();
  leds[65] = CRGB::Black; FastLED.show();
  leds[75] = CRGB::Black; FastLED.show();
  leds[74] = CRGB::Black; FastLED.show();
  leds[84] = CRGB::Black; FastLED.show();
  leds[85] = CRGB::Black; FastLED.show();
  }
void whiteZero(){
  leds[15] = CRGB::White; FastLED.show();
  leds[14] = CRGB::White; FastLED.show();
  leds[23] = CRGB::White; FastLED.show();
  leds[26] = CRGB::White; FastLED.show();
  leds[36] = CRGB::White; FastLED.show();
  leds[33] = CRGB::White; FastLED.show();
  leds[43] = CRGB::White; FastLED.show();
  leds[46] = CRGB::White; FastLED.show();
  leds[56] = CRGB::White; FastLED.show();
  leds[53] = CRGB::White; FastLED.show();
  leds[63] = CRGB::White; FastLED.show();
  leds[66] = CRGB::White; FastLED.show();
  leds[76] = CRGB::White; FastLED.show();
  leds[73] = CRGB::White; FastLED.show();
  leds[84] = CRGB::White; FastLED.show();
  leds[85] = CRGB::White; FastLED.show();
  delay(500);
  leds[15] = CRGB::Black; FastLED.show();
  leds[14] = CRGB::Black; FastLED.show();
  leds[23] = CRGB::Black; FastLED.show();
  leds[26] = CRGB::Black; FastLED.show();
  leds[36] = CRGB::Black; FastLED.show();
  leds[33] = CRGB::Black; FastLED.show();
  leds[43] = CRGB::Black; FastLED.show();
  leds[46] = CRGB::Black; FastLED.show();
  leds[56] = CRGB::Black; FastLED.show();
  leds[53] = CRGB::Black; FastLED.show();
  leds[63] = CRGB::Black; FastLED.show();
  leds[66] = CRGB::Black; FastLED.show();
  leds[76] = CRGB::Black; FastLED.show();
  leds[73] = CRGB::Black; FastLED.show();
  leds[84] = CRGB::Black; FastLED.show();
  leds[85] = CRGB::Black; FastLED.show();
}
