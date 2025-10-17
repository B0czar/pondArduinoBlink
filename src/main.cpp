#include <Arduino.h>
constexpr int luzInterna = 13;
constexpr int tempoDelay = 500;

constexpr int r = 9;
constexpr int g = 10;
constexpr int b = 11;

constexpr int buzzer = 5;
constexpr int potenciometro = A0;

int valorPotenciometro = analogRead(potenciometro);
int volumePWM = map(valorPotenciometro, 0, 1023, 0, 255);

void setup() {
  Serial.begin(9600);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(luzInterna, OUTPUT);
}

void loop() {
//vermelho
digitalWrite(luzInterna, HIGH);
analogWrite(buzzer, volumePWM);
digitalWrite(r, HIGH);
delay(tempoDelay);

digitalWrite(r, LOW);
digitalWrite(luzInterna, LOW);
digitalWrite(buzzer, LOW);
delay(tempoDelay);

valorPotenciometro = analogRead(potenciometro);
volumePWM = map(valorPotenciometro, 0, 1023, 0, 255);

//verde
digitalWrite(luzInterna, HIGH);
analogWrite(buzzer, volumePWM);
digitalWrite(g, HIGH);
delay(tempoDelay);

digitalWrite(g, LOW);
digitalWrite(luzInterna, LOW);
digitalWrite(buzzer, LOW);
delay(tempoDelay);

valorPotenciometro = analogRead(potenciometro);
volumePWM = map(valorPotenciometro, 0, 1023, 0, 255);

//azul
digitalWrite(luzInterna, HIGH);
analogWrite(buzzer, volumePWM);
digitalWrite(b, HIGH);
delay(tempoDelay);

digitalWrite(b, LOW);
digitalWrite(luzInterna, LOW);
digitalWrite(buzzer, LOW);
delay(tempoDelay);

valorPotenciometro = analogRead(potenciometro);
volumePWM = map(valorPotenciometro, 0, 1023, 0, 255);

//vermelho/verde
digitalWrite(luzInterna, HIGH);
analogWrite(buzzer, volumePWM);
digitalWrite(r, HIGH);
digitalWrite(g, HIGH);
delay(tempoDelay);

digitalWrite(r, LOW);
digitalWrite(g, LOW);
digitalWrite(luzInterna, LOW);
digitalWrite(buzzer, LOW);
delay(tempoDelay);

valorPotenciometro = analogRead(potenciometro);
volumePWM = map(valorPotenciometro, 0, 1023, 0, 255);

//verde/azul
digitalWrite(luzInterna, HIGH);
analogWrite(buzzer, volumePWM);
digitalWrite(g, HIGH);
digitalWrite(b, HIGH);
delay(tempoDelay);

digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(luzInterna, LOW);
digitalWrite(buzzer, LOW);
delay(tempoDelay);

valorPotenciometro = analogRead(potenciometro);
volumePWM = map(valorPotenciometro, 0, 1023, 0, 255);

//vermelho/azul
digitalWrite(luzInterna, HIGH);
analogWrite(buzzer, volumePWM);
digitalWrite(r, HIGH);
digitalWrite(b, HIGH);
delay(tempoDelay);

digitalWrite(r, LOW);
digitalWrite(b, LOW);
digitalWrite(luzInterna, LOW);
digitalWrite(buzzer, LOW);
delay(tempoDelay);

valorPotenciometro = analogRead(potenciometro);
volumePWM = map(valorPotenciometro, 0, 1023, 0, 255);

//tudo ligado
digitalWrite(luzInterna, HIGH);
analogWrite(buzzer, volumePWM);
digitalWrite(r, HIGH);
digitalWrite(g, HIGH);
digitalWrite(b, HIGH);
delay(tempoDelay);

digitalWrite(r, LOW);
digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(luzInterna, LOW);
digitalWrite(buzzer, LOW);
delay(tempoDelay);
}
