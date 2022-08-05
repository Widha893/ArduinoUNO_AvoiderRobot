#include <Arduino.h>

class Read_Range
{
    private:
    long distance;
    long duration;

    public:
    long calcDuration(uint8_t pin);
    void calcDistance(uint8_t trigpin, uint8_t pin);

    //getter
    long getDistance() { return distance; }
};