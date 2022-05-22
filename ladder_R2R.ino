#include <math.h>
int valSin;
int out[] = {2, 3, 4, 5, 6, 7, 8, 9}; //numbers of used pins
int numOfOuts = 8; //number of used pins
int data = 0;
void setup() {
  Serial.begin(9600);
  for (int i = 0; i < numOfOuts; i++) { //set all pins as outputs
    pinMode(out[i], OUTPUT);
  }
}
void loop() {
  for (int i = 0; i < 360; i++) {
    valSin = ((sin(i * DEG_TO_RAD) + 1) * 127); //creation of sinus
    byte lowBits = valSin << 1;
    byte highBits = valSin >> 9;
    for (int i = 0; i < numOfOuts; i++) {
      digitalWrite(out[i], valSin & (1 << i));
    }
    delay(2); //change this freely, changes refreshing frequency of oscilloscope
    Serial.println(analogRead(A5)); //oscilloscope node
  }
}
