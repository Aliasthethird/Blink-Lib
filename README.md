# Blinker Library for ESP32

## Introduction
Blinker is an Arduino library for easily managing blinking LEDs using hardware timers on an ESP32.

## Features
- Manages LED blinking using hardware timers.
- Adjustable intervals for blinking.

## Installation (PlatformIO)
To install Blinker using PlatformIO:
1. Open your PlatformIO project.
2. Add `lib_deps = aliasthethird/Blink@^1.0.5` to your `platformio.ini` dependencies.
3. PlatformIO will automatically download and install the library.

## Usage
Include the library and create a Blinker object. The object initializes itself, so no additional setup is required:

```cpp
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
```
