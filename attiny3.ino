#include <Adafruit_NeoPixel.h>

#define PIN 1

Adafruit_NeoPixel strip = Adafruit_NeoPixel(3, PIN, NEO_GRB + NEO_KHZ800);

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'  
}

// the loop routine runs over and over again forever:
void loop() {
  colorWipe(strip.Color(0, 0, 255), 0); // Red  
  strip.show();
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}
