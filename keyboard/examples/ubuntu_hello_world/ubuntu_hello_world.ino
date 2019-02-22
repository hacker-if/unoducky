// Title: Ubuntu Hello World
// Author: Rennan Cockles

#include <Keyboard.h>

Keyboard kb;


void setup() {
    Serial.begin(9600);
    delay(1000);
}


void loop() {
    kb.ALT_F2();
    delay(500);
    kb.STRING("gedit");
    kb.ENTER();
    delay(1500);
    kb.STRING("Hello World!!");
    kb.ENTER();

    delay(300000);
}
