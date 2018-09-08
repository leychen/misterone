
#include <Stepper.h>
int solenoide = 13; 
const int stepsPerRevolution = 400;  
;Stepper myStepper(800 , 9, 8);

void setup() {
  myStepper.setSpeed(950);
 pinMode(solenoide, OUTPUT);
}

void loop() {

//PARTIR DESDE EL ORIGEN PARA LLEGAR A 0



myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(10000000000);
}
