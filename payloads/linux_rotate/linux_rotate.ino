// Title: Ubuntu fork bomb
// Author: Rennan Cockles

#include <Keyboard.h>

Keyboard kb;

void setup() {  
    Serial.begin(9600);  
    delay(2000);
}

void loop() {
    kb.ALT_F2();
    kb.DELAY(500);
    kb.STRING("terminator");
    kb.ENTER();
    delay(2000 );
    
    kb.STRING("xrandr --output $( xrandr -q | grep primary | awk '{print $1;}' )  --rotate inverted"); 
    kb.ENTER();
    
    kb.DELAY(300000); 
}
