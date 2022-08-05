#include "control.h"

void Control::moveForward(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft)
{
    digitalWrite(fwdright, HIGH);
    digitalWrite(revright, LOW);
    digitalWrite(fwdleft, HIGH);
    digitalWrite(revleft, LOW);
}

void Control::moveBackward(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft)
{
    digitalWrite(fwdright, LOW);
    digitalWrite(revright, HIGH);
    digitalWrite(fwdleft, LOW);
    digitalWrite(revleft, HIGH);
}

void Control::stopMoving(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft)
{
    digitalWrite(fwdright, LOW);
    digitalWrite(revright, LOW);
    digitalWrite(fwdleft, LOW);
    digitalWrite(revleft, LOW);
}

void Control::turnRight(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft)
{
    digitalWrite(fwdright, HIGH);
    digitalWrite(revright, LOW);
    digitalWrite(fwdleft, LOW);
    digitalWrite(revleft, LOW);
}

void Control::turnLeft(uint8_t fwdright, uint8_t fwdleft, uint8_t revright, uint8_t revleft)
{
    digitalWrite(fwdright, LOW);
    digitalWrite(revright, LOW);
    digitalWrite(fwdleft, HIGH);
    digitalWrite(revleft, LOW);
}
