#include "DigiKeyboard.h"

#define KEY_PRTSCR 0x46
#define KEY_R      0x15
#define KEY_ENTER  0x28
#define KEY_ESC    0x29
#define KEY_F4     0x3D
#define KEY_N      0x11

void slowPrint(const char *txt) {
  for (int i = 0; txt[i] != '\0'; i++) {
    DigiKeyboard.print(txt[i]);
    DigiKeyboard.delay(150); 
  }
}

void setup() {}

void loop() {
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(0);

  // Contraste alto
  DigiKeyboard.sendKeyStroke(KEY_PRTSCR, MOD_ALT_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(3000); 

  // Teclado en pantalla
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("osk"); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000); 

  // Notepad
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000); 
  
  slowPrint("PRUEBA DE CONCEPTO");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Tiempo de espera
  DigiKeyboard.delay(8000); 

  // Restauración
  
  // Cierre de Notepad (Alt + F4 + N)
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(1200);
  DigiKeyboard.sendKeyStroke(KEY_N); 
  DigiKeyboard.delay(1500); 

  // Cierre de teclado en pantalla
  DigiKeyboard.sendKeyStroke(0x2B, MOD_ALT_LEFT); 
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); 
  DigiKeyboard.delay(1500);

  // Quitar el contraste alto
  DigiKeyboard.sendKeyStroke(KEY_PRTSCR, MOD_ALT_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  for(;;){ DigiKeyboard.delay(1000); }
}