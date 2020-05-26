#include <EduIntro.h>

Button btn0(0);
Button btn1(1);
Button btn2(2);
Button btn3(3);
Button btn4(4);
Button btn5(5);
Button btn6(6);
Button btn7(7);

Piezo piezo(14);

void setup() {
  // we need nothing ;)
}

void loop() {
  if (btn1.pressed()) piezo.beep(NOTE_C4);
  if (btn1.released()) piezo.noBeep();

  if (btn0.pressed()) piezo.beep(NOTE_D4);
  if (btn0.released()) piezo.noBeep();

  if (btn2.pressed()) piezo.beep(NOTE_E4);
  if (btn2.released()) piezo.noBeep();

  if (btn3.pressed()) piezo.beep(NOTE_F4);
  if (btn3.released()) piezo.noBeep();

  if (btn4.pressed()) piezo.beep(NOTE_G4);
  if (btn4.released()) piezo.noBeep();

  if (btn5.pressed()) piezo.beep(NOTE_A4);
  if (btn5.released()) piezo.noBeep();
 
  if (btn6.pressed()) piezo.beep(NOTE_B4);
  if (btn6.released()) piezo.noBeep();

  if (btn7.pressed()) piezo.beep(NOTE_C5);
  if (btn7.released()) piezo.noBeep();
}
