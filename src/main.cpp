#include <Arduino.h>
 

int led = 13;
 

void setup() {                
  
  pinMode(led, OUTPUT);
  Serial.begin(112500);    
}
 

void loop() {
  digitalWrite(led, HIGH);   // enciende el LED poniendo el voltaje HIGH
  Serial.println("LED is ON");
  delay(500);               // espera por 500ms
  digitalWrite(led, LOW);    // apaga el LED poniendo el voltaje LOW
  Serial.println("LED is OFF");
  delay(500);               // espera por 500ms
}
