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
  servo.attach( 16, 500, 2500);
  //servo.write(0);
  }

void loop(){
  
  if(ESP32_BT.available()){
    comando = ESP32_BT.read();
    if(comando == 'p'){
      motor1.move(0);
      motor2.move(0);
    }else if(comando == 'e'){
      motor1.move(0);
      motor2.move(200);
    }
    if(comando == 'd'){
      motor1.move(-200);
      motor2.move(0);
  }else if(comando == 'f'){ 
      motor1.move(-200);
      motor2.move(200);
  }else if(comando == 'b'){
    tone(buzzer, 500);
    delay(500);
    noTone(buzzer);
  }else if(comando == 's'){
    for(i = 0 ;i<90;i++){
      servo.write(i);
      delay(50);
    }
  }else if(comando == 'j'){
      for(j = 90 ;j>1;--j){
        servo.write(j);
        delay(50);
      }
  }
  
  

 }
 Serial.print("Testando o servo e como ta funcioandno seu giro    ");
 Serial.print(j);
 Serial.print("__________");
 Serial.println(i);

}