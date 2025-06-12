#include <Keyboard.h>
#include <stdlib.h>

// Converts AZERTY -> QWERTY
String frToEn(String text) {
  int i = 0;
  String enLayout = " =qwertyuiopasdfghjkl;zxcvbnQWERTYUIOPASDFGHJKL:ZXCVBNm,./M<>?1234567890!@#$%^&*()";
  String frLayout = " =azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN,;:!?./ & \"'(- _ 1234567890";
  String result = "";

  while (text[i] != 0) {
    result += (String)enLayout[frLayout.indexOf((String)text[i++])];
  }
  return result;
}

// Type the translated text
void typeCorrectedText(const String inputText) {
  String correctedText = frToEn(inputText);
  for (int i = 0; i < correctedText.length(); i++) {
    Keyboard.write(correctedText[i]);
    delay(100);
  }
  delay(500);
}

// Open Windows "Run" dialog and type a command
void openCommandAndExecute(const String command) {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  typeCorrectedText(command);
  delay(100);
  Keyboard.write(KEY_RETURN);
  delay(500);
}

void setup() {
  Keyboard.begin();
  delay(5000); // Wait for system to be ready
  // Example usage (comment out if not needed)
  // openCommandAndExecute("cmd /c echo Hello from your Rubber Ducky!");
}

void loop() {
  // Nothing here – all logic is in setup
}
