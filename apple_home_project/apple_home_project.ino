#include "HomeSpan.h"
#include "LED.h"

void setup() {
  Serial.begin(115200);
  homeSpan.setPairingCode("35786753");
  homeSpan.begin(Category::Lighting,"My Home LED");

  new SpanAccessory();
  new Service::AccessoryInformation();
  new Characteristic::Identify();

  new LED(2);
}


void loop() {
  homeSpan.poll();
}
