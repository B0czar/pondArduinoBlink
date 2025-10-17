#include <Arduino.h>
const int luzInterna = 13;

const int r = 9;
const int g = 10;
const int b = 11;
const int buzzer = 7;
const int tempoDelay = 500;


void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(luzInterna, OUTPUT);
}

void loop() {
//vermelho
digitalWrite(luzInterna, HIGH);
digitalWrite(r, HIGH);
delay(tempoDelay);
digitalWrite(r, LOW);
digitalWrite(luzInterna, LOW);
delay(tempoDelay);
//verde
digitalWrite(luzInterna, HIGH);
digitalWrite(g, HIGH);
delay(tempoDelay);
digitalWrite(g, LOW);
digitalWrite(luzInterna, LOW);
delay(tempoDelay);
//azul
digitalWrite(luzInterna, HIGH);
digitalWrite(b, HIGH);
delay(tempoDelay);
digitalWrite(b, LOW);
digitalWrite(luzInterna, LOW);
delay(tempoDelay);
//vermelho/verde
digitalWrite(luzInterna, HIGH);
digitalWrite(r, HIGH);
digitalWrite(g, HIGH);
delay(tempoDelay);
digitalWrite(r, LOW);
digitalWrite(g, LOW);
digitalWrite(luzInterna, LOW);
delay(tempoDelay);
//verde/azul
digitalWrite(luzInterna, HIGH);
digitalWrite(g, HIGH);
digitalWrite(b, HIGH);
delay(tempoDelay);
digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(luzInterna, LOW);
delay(tempoDelay);
//vermelho/azul
digitalWrite(luzInterna, HIGH);
digitalWrite(r, HIGH);
digitalWrite(b, HIGH);
delay(tempoDelay);
digitalWrite(r, LOW);
digitalWrite(b, LOW);
digitalWrite(luzInterna, LOW);
delay(tempoDelay);
//tudo ligado
digitalWrite(luzInterna, HIGH);
digitalWrite(r, HIGH);
digitalWrite(g, HIGH);
digitalWrite(b, HIGH);
delay(tempoDelay);
digitalWrite(r, LOW);
digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(luzInterna, LOW);
delay(tempoDelay);
}
