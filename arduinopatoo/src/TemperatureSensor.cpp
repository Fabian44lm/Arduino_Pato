#include "TemperatureSensor.h"

const int ThermistorPin = 35;         // Pin de datos del termistor (pines 2, 4 no funcionan por uso de Wi-Fi)
const int SeriesResistor = 10000;     // Resistencia en serie con el termistor [ohms]
const int ThermistorNominal = 10000;  // Resistencia del termistor a la temperatura nominal [ohms]
const int NominalTemp = 25;           // Temperatura para resistencia nominal del termistor [ºC]
const int BCoefficient = 3950;        // Coeficiente beta del termistor [ºC]
const int NumSamples = 20; 

TemperatureSensor::TemperatureSensor(int thermistorPin, int SeriesResistor, int ThermistorNominal, int nominalTemp, int bCoefficient, int numSamples) {
    
    
}

// float TemperatureSensor::readTemperature() {
    
// }
