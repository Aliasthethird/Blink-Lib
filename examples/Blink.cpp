#include <Arduino.h>
#include "Blinker.h"

#define BLINK_INTERVAL 1.0f

Blinker blinker(LED_BUILTIN, BLINK_INTERVAL);
void setup() {
    // nothing to do here
}

void loop() {
    // Main loop remains empty
}
