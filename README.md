# Practica_1
En la práctica he aprendido a programar y cargar codigo en la ESP32 por primera vez. El objetivo es producir un parpadeo periodico de un LED.
## Codigo:
```

#include <Arduino.h>

int led = 13;

void setup() {                
  
  pinMode(led, OUTPUT);
  Serial.begin(112500);    
}
 

void loop() {
  digitalWrite(led, HIGH);   
  Serial.println("LED is ON");
  delay(500);               
  digitalWrite(led, LOW);    
  Serial.println("LED is OFF");
  delay(500);               
}

```
