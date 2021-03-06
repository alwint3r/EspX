//
// Created by Andri Yadi on 8/1/16.
// Adapted from: https://github.com/skywodd/pcf8574_arduino_library
//

#ifndef XBOARD_BASE_GPIOEX_H
#define XBOARD_BASE_GPIOEX_H

#include "Arduino.h"
#include <Wire.h>
#include <SPI.h>
#include <ESP8266WiFi.h>
#include "SX1508.h"

#define ESPECTRO_BASE_GPIOEX_ADDRESS        0x20
#define ESPECTRO_BASE_GPIOEX_BUTTON_PIN     0
#define ESPECTRO_BASE_GPIOEX_LED_PIN        2

#define IOX0                                  0
#define IOX1                                  1
#define IOX2                                  2
#define IOX3                                  3
#define IOX4                                  4
#define IOX5                                  5
#define IOX6                                  6
#define IOX7                                  7

class ESPectroBase_GpioEx: public SX1508 {
public:
    ESPectroBase_GpioEx(uint8_t address = ESPECTRO_BASE_GPIOEX_ADDRESS);
    ~ESPectroBase_GpioEx();

    //byte begin();
    byte begin(byte address = ESPECTRO_BASE_GPIOEX_ADDRESS, byte resetPin = 0xFF);
    void turnOnLED();
    void turnOffLED();
    void blinkLED(unsigned long tOn, unsigned long tOff, byte onIntensity = 255, byte offIntensity = 0);
private:
    byte i2cDeviceAddress_;
};


#endif //XBOARD_BASE_GPIOEX_H
