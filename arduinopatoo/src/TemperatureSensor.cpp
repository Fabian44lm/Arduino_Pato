#include "TemperatureSensor.h"
#include <iostream>

TemperatureSensor::TemperatureSensor(float Tmin, float Tmax)
{
    this->Tmin = Tmin;
    this->Tmax = Tmax;
    readTemp();
    
}

float TemperatureSensor::readTemp()
{
    // Implementa la lógica para leer la temperatura
    // Puedes utilizar las variables miembro y otros métodos de la clase
    return 0.0;  // Solo un valor de ejemplo
}