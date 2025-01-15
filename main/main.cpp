#include <Arduino.h>

void setup(){
}

void loop() {
}

extern "C" void app_main(void) {
  initArduino();
  setup();
  for (;;) {
    loop();
    vPortYield();
  }
}
