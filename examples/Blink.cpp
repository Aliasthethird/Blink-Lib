#include <Arduino.h>
#include "Blinker.h"

#define BLINK_INTERVAL 2.0f

// Create a Blinker object that will blink the LED_BUILTIN pin
Blinker blinker(LED_BUILTIN, BLINK_INTERVAL);
// The LED will start blinking as soon as the Blinker object is created
// no other code is required in the setup() or loop() functions

void setup() {
    // No additional setup needed
}

void loop() {
    // Nothing to do here
}
