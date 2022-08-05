#include "readRange.h"

long Read_Range::calcDuration(uint8_t pin)
{
    duration = pulseIn(pin, HIGH);
    return duration;
}

void Read_Range::calcDistance(uint8_t trigpin, uint8_t pin)
{
    digitalWrite(trigpin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigpin, HIGH);
    delayMicroseconds(10);
    float duration = calcDuration(pin);
    distance = duration/58.2;
}