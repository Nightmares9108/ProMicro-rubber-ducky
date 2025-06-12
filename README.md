# Rubber Ducky AZERTY to QWERTY Translator

This Arduino sketch is made for devices like the **Digispark**, **Arduino Leonardo**, or **ESP32-S2/C3** with native USB HID support.

It helps translate strings typed in **AZERTY layout** to **QWERTY layout**, to make Rubber Ducky payloads work correctly on English-based systems (e.g. US QWERTY Windows).

## 🔧 Features

- Converts text from AZERTY to QWERTY layout
- Simulates typing using the `Keyboard` library
- Includes a function to open the Windows Run dialog and type a command

## 🧪 Example

```cpp
openCommandAndExecute("cmd /c echo Hello World!");

