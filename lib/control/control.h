#include <Arduino.h>

class Control
{
    public:

    void moveForward(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft);
    void moveBackward(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft);
    void stopMoving(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft);
    void turnRight(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft);
    void turnLeft(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft);
};