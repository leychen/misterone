
#include <Stepper.h>
int solenoide = 13; 
const int stepsPerRevolution = 400;  
;Stepper myStepper(800 , 9, 8);

void setup() {
  myStepper.setSpeed(950);
 pinMode(solenoide, OUTPUT);
}

void loop() {

// 12 TABLETAS//

delay(2000);

//2
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//3
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//4
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//5
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//6
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//7
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//8
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//9
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//10
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//11
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);
//12
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
delay(1000);
digitalWrite(solenoide, HIGH);
delay(80);
digitalWrite(solenoide, LOW);
delay(500);

//Paso extra para sacar tabletas


myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);
myStepper.step(-12192);

//regreso

delay(5000);

//2
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
//3
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
//4
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
//5
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);

//6
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);

//7
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);

//8
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);

//9
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);


//10
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);

//11
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);


//12
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);

//paso extra para volver al origen

myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);
myStepper.step(12192);

//Fin

delay(10000000000000);
}


