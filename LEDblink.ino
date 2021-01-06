#include <M5Stack.h>

int LEDPin = 2;     // 

// the setup routine runs once when M5Stack starts up
void setup(){

  // Initialize the M5Stack object
  M5.begin();
  
  M5.Lcd.printf("M5Stack LED Blink test:\r\n");

  pinMode(LEDPin, OUTPUT); //22pin OUTPUT mode
}

// the loop routine runs over and over again forever
void loop() {
  if(M5.BtnA.wasPressed()) {
    M5.Lcd.printf("wasPressed A \r\n");
    M5.Lcd.printf("LED ON \r\n");
    digitalWrite(LEDPin, HIGH);
  }

  if(M5.BtnB.wasPressed()) {
    M5.Lcd.printf("wasPressed B \r\n");
    M5.Lcd.printf("LED OFF \r\n");
    digitalWrite(LEDPin, LOW);
  }
  
  m5.update();
}
