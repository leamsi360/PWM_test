#include <Arduino.h>
#include "driver/ledc.h"

const int ledPin = 14;     // Pin de salida PWM
const int freq = 1000;     // Frecuencia de la señal PWM (en Hz)
const int resolution = 8;  // Resolución de PWM (8 bits, valores de 0 a 255)
const int pwmChannel = 14; // Canal PWM

void setup()
{
  // Configuración del canal PWM
  ledcSetup(pwmChannel, freq, resolution);

  // Asignación del pin al canal PWM
  ledcAttachPin(ledPin, pwmChannel);
}

void loop()
{

  ledcWrite(pwmChannel, 102);
}
