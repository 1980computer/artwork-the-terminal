#include <Adafruit_NeoPixel.h>

#define PIN        6  // Change to the pin where your LED strip is connected
#define NUM_LEDS   81 // Number of LEDs in your strip
#define SWIPE_LEN  10 // Length of the swipe effect

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  // Original random green blinking animation
  randomBlink();

  // White swipe effect
  whiteSwipe();
}

void randomBlink() {
  int led = random(NUM_LEDS);  // Pick a random LED
  int fadeTime = random(50, 250); // Random fade time between 50 and 250 milliseconds

  // Fade in
  for(int brightness = 0; brightness < 255; brightness++) {
    strip.setPixelColor(led, strip.Color(0, brightness, 0)); // Only green color
    strip.show();
    delay(fadeTime / 255);
  }

  delay(random(100, 1000)); // Random delay when LED is on

  // Fade out
  for(int brightness = 255; brightness >= 0; brightness--) {
    strip.setPixelColor(led, strip.Color(0, brightness, 0)); // Only green color
    strip.show();
    delay(fadeTime / 255);
  }

  delay(random(50, 500)); // Random delay before the next blink
}

void whiteSwipe() {
  for (int i = 0; i < NUM_LEDS + SWIPE_LEN; i++) {
    for (int j = i - SWIPE_LEN; j < i; j++) {
      if (j >= 0 && j < NUM_LEDS) {
        int brightness = 255;
        if (j < i - SWIPE_LEN + 3 || j > i - 3) { // Fade effect on both ends
          brightness = map(j, i - SWIPE_LEN, i, 0, 255);
        }
        strip.setPixelColor(j, strip.Color(brightness, brightness, brightness)); // White color
      }
    }
    strip.show();
    delay(30); // Speed of swipe

    // Clear the swipe
    for (int j = i - SWIPE_LEN; j < i; j++) {
      if (j >= 0 && j < NUM_LEDS) {
        strip.setPixelColor(j, strip.Color(0, 0, 0));
      }
    }
  }
}
