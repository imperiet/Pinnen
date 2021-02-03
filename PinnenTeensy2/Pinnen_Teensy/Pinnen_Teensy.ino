/* Buttons to USB Keyboard Example
Hello World 
   You must select Keyboard from the "Tools > USB Type" menu

   This example code is in the public domain.
*/

#include <Bounce.h>

// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.
Bounce button0 = Bounce(6, 10);
Bounce button1 = Bounce(5, 10);  // 10 = 10 ms debounce time
Bounce button2 = Bounce(4, 10);  // which is appropriate for
Bounce button3 = Bounce(7, 10);  // most mechanical pushbuttons
Bounce button4 = Bounce(8, 10);
Bounce button5 = Bounce(11, 10);  // if a button is too "sensitive"
Bounce button6 = Bounce(17, 10);  // to rapid touch, you can
Bounce button7 = Bounce(16, 10);  // increase this time.
Bounce button8 = Bounce(15, 10);
Bounce button9 = Bounce(12, 10);
Bounce button10 = Bounce(13, 10);
Bounce button11 = Bounce(14, 10);

void setup() {
  // Configure the pins for input mode with pullup resistors.
  // The pushbuttons connect from each pin to ground.  When
  // the button is pressed, the pin reads LOW because the button
  // shorts it to ground.  When released, the pin reads HIGH
  // because the pullup resistor connects to +5 volts inside
  // the chip.  LOW for "on", and HIGH for "off" may seem
  // backwards, but using the on-chip pullup resistors is very
  // convenient.  The scheme is called "active low", and it's
  // very commonly used in electronics... so much that the chip
  // has built-in pullup resistors!
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);  // Teensy++ LED, may need 1k resistor pullup
  pinMode(16, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  
}

void loop() {
  // Update all the buttons.  There should not be any long
  // delays in loop(), so this runs repetitively at a rate
  // faster than the buttons could be pressed and released.
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();

  // Check each button for "falling" edge.
  // Type a message on the Keyboard when each button presses
  // Update the Joystick buttons only upon changes.
  // falling = high (not pressed - voltage from pullup resistor)
  //           to low (pressed - button connects pin to ground)
  if (button0.fallingEdge()) {
    Keyboard.press(KEY_Q);
  }
  if (button1.fallingEdge()) {
    Keyboard.press(KEY_W);
  }
  if (button2.fallingEdge()) {
    Keyboard.press(KEY_E);
  }
  if (button3.fallingEdge()) {
    Keyboard.press(KEY_A);
  }
  if (button4.fallingEdge()) {
    Keyboard.press(KEY_S);
  }
  if (button5.fallingEdge()) {
    Keyboard.press(KEY_D);
  }
  if (button6.fallingEdge()) {
    Keyboard.press(KEY_ESC);
  }
  if (button7.fallingEdge()) {
    Keyboard.press(KEY_SPACE);
  }
  if (button8.fallingEdge()) {
    Keyboard.press(KEY_E);
  }
  if (button9.fallingEdge()) {
    Keyboard.press(KEY_C);
  }
  if (button10.fallingEdge()) {
    Keyboard.press(KEY_V);
  }
  if (button11.fallingEdge()) {
    Keyboard.press(KEY_B);
  }

  // Check each button for "rising" edge
  // Type a message on the Keyboard when each button releases.
  // For many types of projects, you only care when the button
  // is pressed and the release isn't needed.
  // rising = low (pressed - button connects pin to ground)
  //          to high (not pressed - voltage from pullup resistor)
  if (button0.risingEdge()) {
    Keyboard.release(KEY_Q);
  }
  if (button1.risingEdge()) {
    Keyboard.release(KEY_W);
  }
  if (button2.risingEdge()) {
    Keyboard.release(KEY_E);
  }
  if (button3.risingEdge()) {
    Keyboard.release(KEY_A);
  }
  if (button4.risingEdge()) {
    Keyboard.release(KEY_S);
  }
  if (button5.risingEdge()) {
    Keyboard.release(KEY_D);
  }
  if (button6.risingEdge()) {
    Keyboard.release(KEY_ESC);
  }
  if (button7.risingEdge()) {
    Keyboard.release(KEY_SPACE);
  }
  if (button8.risingEdge()) {
    Keyboard.release(KEY_E);
  }  
  if (button9.risingEdge()) {
    Keyboard.release(KEY_C);
  }  
  if (button10.risingEdge()) {
    Keyboard.release(KEY_V);
  }
  if (button11.risingEdge()) {
    Keyboard.release(KEY_B);
  }
}
