#include <Arduino.h>
#include <readRange.h>
#include <control.h>

#define trigPin     9        
#define echoPin     10       

#define revleft4    4        
#define fwdleft5    5        
#define revright6   6        
#define fwdright7   7        

long duration, distance;

Read_Range read;
Control control;

void setup() {
  
  delay(random(500,2000));   
  Serial.begin(9600);
  pinMode(revleft4, OUTPUT);      
  pinMode(fwdleft5, OUTPUT);
  pinMode(revright6, OUTPUT);
  pinMode(fwdright7, OUTPUT);
  
  pinMode(trigPin, OUTPUT);         
  pinMode(echoPin, INPUT);          
}

void loop() {

  read.calcDistance(trigPin, echoPin);

  delay(10);

  if (read.getDistance() > 19)            
  {
    control.moveForward(fwdright7, fwdleft5, revright6, revleft4);                                                   
  }

  if (read.getDistance() < 18)
  {
    control.stopMoving(fwdright7, fwdleft5, revright6, revleft4);
    delay(500);

    control.moveBackward(fwdright7, fwdleft5, revright6, revleft4);
    delay(500);

    control.stopMoving(fwdright7, fwdleft5, revright6, revleft4);
    delay(100);  

    control.turnRight(fwdright7, fwdleft5, revright6, revleft4);
    delay(500);
  }

}