//Biblioteca da ponte H
 #include <DMPH.h>
//Biblioteca do Bluetooth
 #include <BluetoothSerial.h>
//Biblioteca do Servo
 #include <ESP32Servo.h>   

//Declarando o bluetooth
   BluetoothSerial ESP32_BT;

//Declarando os motores
   DMPH motor1( 13, 14, 12);
   DMPH motor2( 26, 27, 25);
//Declarando servo motor
   Servo servo;
   Servo servo1;
// Criando a variavel de texto de entrada
   char comando;
   const int buzzer = 4;
//Declarando contadores
   int i;
   int j;
void setup(){
  pinMode(buzzer, OUTPUT); 
  Serial.begin(9600);
  ESP32_BT.begin("ESP32_TesteGabs");
  servo.attach( 15, 500, 2500);
  servo1.attach( 16, 500, 2500);
  }

void loop(){

        for(i = 0; i < 120; i++){
          servo.write(i);
          servo1.write(i);
          delay(50);
          }
        for( j = 120 ; j > 1; --j ){
          servo.write(j);
          servo1.write(j);
          delay(50);
          }

       motor1.move(200);
       motor2.move(-200);
       delay(60000);
       motor1.move(0);
       motor2.move(0);
       delay(30000);
       motor1.move(-200);
       motor2.move(200);
       delay(60000);
  /*if(ESP32_BT.available()){
    comando = ESP32_BT.read();
    switch(comando){
      case 'r':
       motor1.move(200);
       motor2.move(-200);
       break;
      case 'p':
       motor1.move(0);
       motor2.move(0);
       break;
      case 'e':
        motor1.move(0);
        motor2.move(200);
        break;
      case 'd':
        motor1.move(-200);
        motor2.move(0);
        break;
      case 'f':
        motor1.move(-200);
        motor2.move(200);
        break;  
      case 'b':
        tone(buzzer, 500);
        delay(1000);
        noTone(buzzer);
        break;
      case 's':
        for(i = 0; i < 90; i++){
          servo.write(i);
          servo1.write(i);
          delay(50);
         }
        break;
      case 'j':
        for( j = 90 ; j > 1; --j ){
          servo.write(j);
          servo1.write(j);
          delay(50);
        }        
    }*/
 }
