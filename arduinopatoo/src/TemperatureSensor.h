#pragma once

#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#include <Arduino.h>

class TemperatureSensor {
public:
    TemperatureSensor(int thermistorPin, int seriesResistor, int thermistorNominal, int nominalTemp, int bCoefficient, int numSamples);
    float readTemperature();
private:
    int thermistorPin  = 35;          // Pin de datos del termistor (pines 2, 4 no funcionan por uso de Wi-Fi)
    int SeriesResistor = 10000;       // Resistencia en serie con el termistor [ohms]
    int ThermistorNominal = 10000;    // Resistencia del termistor a la temperatura nominal [ohms]
    const int NominalTemp = 25;             // Temperatura para resistencia nominal del termistor [ºC]   
    const int BCoefficient = 3950;          // Coeficiente beta del termistor [ºC]
    const int NumSamples = 20;              // Número de muestras para sacar un promedio de lecturas
    int* samples;
};

#endif