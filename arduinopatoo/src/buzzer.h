#pragma once
#include <Arduino.h>
#ifndef buzzer_h
#define buzzer_h

class Buzz {

private: 
    byte pin;
public:
Buzz(){}
Buzz(byte pin);
void init();
void on();
void off();
};
#endif
