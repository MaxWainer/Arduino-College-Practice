#include <Arduino.h>

void setup() {
  // инициализовать последовтаельный коммуникатор 9600 бит в секунду
  Serial.begin(9600);
}

// метод будет вызываться постоянно
void loop() {
  // прочитать значение из А0
  int sensorValue = analogRead(A0);
  // вывести прочитанное значение
  Serial.println(sensorValue);
  delay(1);        // задержать цикл
}