#include "DigiKeyboardDe.h"

void setup() {}


void loop()
{
  DigiKeyboardDe.delay(2000);
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(600);
  DigiKeyboardDe.print("chrome.exe https://www.youtube.com/embed/QH2-TGUlwu4?rel=0&autoplay=1&autoplay=1&controls=0&&showinfo=0&loop=1​​");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(5000);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(3000);
  DigiKeyboardDe.print("https://fakeupdate.net/win10ue/index.html");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(2000);
  DigiKeyboardDe.sendKeyStroke(KEY_F11);
  for(;;){  }
}
