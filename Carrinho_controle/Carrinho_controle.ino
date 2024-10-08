#include <DMPH.h>

   DMPH motor1( 13, 14, 12);
   DMPH motor2( 26, 27, 25);
   int x = 39;
   int y = 36;
   int bz = 35;
void setup(){
  pinMode(bz, INPUT_PULLUP);
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  Serial.begin(9600);
  }

void loop(){
  int Vx  = analogRead(x);
  int Vy  = analogRead(y);
  int Vz  = digitalRead(bz);
  Serial.print(" Eixo X: ");
  Serial.print(Vx);
  Serial.print(" Eixo Y: ");
  Serial.print(Vy);
  Serial.print(" Eixo Z: ");
  Serial.println(Vz);
  if(Vx<1500){
      motor1.move(0);
      motor2.move(0);
  }else if(Vx > 2500){
      motor1.move(200);
      motor2.move(200);
  }
  if(Vy<1500){
      motor1.move(200);
      motor2.move(-200);
  }else if(Vy > 2500){ 
      motor1.move(-200);
      motor2.move(200);
  }


}