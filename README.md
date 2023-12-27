# Blinker Library for ESP32

## Introduction
Blinker is an Arduino library for easily managing blinking LEDs using hardware timers on an ESP32.

## Features
- Manages LED blinking using hardware timers.
- Adjustable intervals for blinking.

## Installation (PlatformIO)
To install Blinker using PlatformIO:
1. Open your PlatformIO project.
2. Add `lib_deps = aliasthethird/Blink@^1.0.1` to your `platformio.ini` dependencies.
3. PlatformIO will automatically download and install the library.

## Usage
Include the library and create a Blinker object. The object initializes itself, so no additional setup is required:
```cpp
#include <Blinker.h>


Blinker blinker(LED_BUILTIN, 0.5); // Blink every 0.5 seconds

void setup() {
    // No additional setup needed
}

void loop() {
    // Your code here
}
```
