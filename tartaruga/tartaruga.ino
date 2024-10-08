// C++ code
//
#include <Servo.h>
      int bot1 = 11;
      int bot2 = 13;
      int bot3 = 12;
      int bot4 = 10;

      //Declarando pinos Arduino ligados a entrada da Ponte H
      int IN1 = 6;
      int IN2 = 7;
      int IN3 = 8;
      int IN4 = 9;

void setup()
{
  Serial.begin(9600);
  //Define os pinos como saida da Ponte H
 pinMode(bot1, INPUT_PULLUP);
 pinMode(bot2, INPUT_PULLUP);
 pinMode(bot3, INPUT_PULLUP);
 pinMode(bot4, INPUT_PULLUP);
 // Define os botões
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 randomSeed(analogRead(0));  // Inicia a semente de números aleatórios

}

void loop()
{   
    //Para frente
    /*digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);*/

    //Para tras
    //digitalWrite(IN2, HIGH);
    //digitalWrite(IN1, LOW);
    //digitalWrite(IN3, LOW);
    //digitalWrite(IN4, HIGH);

    //Para esquerda

    //digitalWrite(IN2, HIGH);
    //digitalWrite(IN1, LOW);
    //digitalWrite(IN3, HIGH);
    //digitalWrite(IN4, LOW);

    //Para direita

    /*digitalWrite(IN2, LOW);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);*/

    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);

  if( digitalRead(bot1) == LOW ){
  //VIRANDO PARA ESQUERDA
    digitalWrite(IN2, HIGH);
    digitalWrite(IN1, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(750);
  } else if(digitalRead(bot2) == LOW ){
    
    digitalWrite(IN2, LOW);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(750);

  } else if(digitalRead(bot3) == LOW ){

    digitalWrite(IN2, HIGH);
    digitalWrite(IN1, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(750);
    int valor = random(0, 2);  // Gera valor aleatório entre 0 e 1
    if(valor == 1){
      digitalWrite(IN2, LOW);
      digitalWrite(IN1, HIGH);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      delay(750);
      }else{
        digitalWrite(IN2, HIGH);
        digitalWrite(IN1, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        delay(500);
      }
  } else if(digitalRead(bot4) == LOW ){

    digitalWrite(IN2, HIGH);
    digitalWrite(IN1, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(2000);
  }


}
