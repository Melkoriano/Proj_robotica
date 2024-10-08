#include <DMPH.h>

   DMPH motor1( 8, 9, 10);
   DMPH motor2( 7, 6, 5);
    int vel = 50;
   int sensorE = 4;
   int sensorD = 3;

void setup(){
  pinMode(sensorE, INPUT);
  pinMode(sensorD, INPUT);

  Serial.begin(9600);
  }
void loop(){

    int esq = digitalRead(sensorE);
    int dir = digitalRead(sensorD);
    Serial.print("Sensor E: ");
    Serial.print(esq);
    Serial.print("Sensor D: ");
    Serial.println(dir);
    if(esq == 1 && dir == 1){
      frente();
    }else if(esq == 1 && dir != 1){
    esquerda();
    }else if(esq != 1 && dir ==1){
     direita();
    }else{
      parar();
    }
  } 

void frente(){
  motor1.move(vel);
  motor2.move(vel);
 }
void esquerda(){
  motor1.move(0);
  motor2.move(vel);
 }
void direita(){
  motor1.move(vel);
  motor2.move(0);
 }
void parar(){
  motor1.move(0);
  motor2.move(0);
}