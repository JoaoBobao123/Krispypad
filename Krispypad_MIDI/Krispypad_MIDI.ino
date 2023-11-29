#include "MIDIUSB.h"
#define INPUT_PIN_1 A0
#define INPUT_PIN_2 A1
#define INPUT_PIN_3 A2
#define INPUT_PIN_4 A3
#define INPUT_PIN_5 A4
#define INPUT_PIN_6 A5
//Váriaveis das entradas analógicas sendo usadas

// First parameter is the event type (0x09 = note on, 0x08 = note off).
// Second parameter is note-on/note-off, combined with the channel.
// Channel can be anything between 0-15. Typically reported to the user as 1-16.
// Third parameter is the note number (48 = middle C).
// Fourth parameter is the velocity (64 = normal, 127 = fastest).
void noteOn(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOn = {0x09, 0x90 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOn);
}

void noteOff(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOff = {0x08, 0x80 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOff);
}

void setup() {
  pinMode(INPUT_PIN_1, INPUT);
  pinMode(INPUT_PIN_2, INPUT);
  pinMode(INPUT_PIN_3, INPUT);
  pinMode(INPUT_PIN_4, INPUT);
  pinMode(INPUT_PIN_5, INPUT);
  pinMode(INPUT_PIN_6, INPUT);
 // váriaveis de input
  Serial.begin(115200);
}

// First parameter is the event type (0x0B = control change).
// Second parameter is the event type, combined with the channel.
// Third parameter is the control number number (0-119).
// Fourth parameter is the control value (0-127).

void controlChange(byte channel, byte control, byte value) {
  midiEventPacket_t event = {0x0B, 0xB0 | channel, control, value};
  MidiUSB.sendMIDI(event);
}

void loop() {
  int result1 = readAnalogButton(INPUT_PIN_1);
  int result2 = readAnalogButton(INPUT_PIN_2);
  int result3 = readAnalogButton(INPUT_PIN_3);
  int result4 = readAnalogButton(INPUT_PIN_4);
  int result5 = readAnalogButton(INPUT_PIN_5);
  int result6 = readAnalogButton(INPUT_PIN_6);
  
  
  // lê as variaveis de input e printa como resualtado
  result1 = (analogRead(INPUT_PIN_1));
  result2 = (analogRead(INPUT_PIN_2));
  result3 = (analogRead(INPUT_PIN_3));
  result4 = (analogRead(INPUT_PIN_4));
  result5 = (analogRead(INPUT_PIN_5));
  result6 = (analogRead(INPUT_PIN_6));


 if (result2 > 500 && (result2 < 513)) {
  Serial.println("1-1");
  noteOn(0, 35, 100);   
  MidiUSB.flush(); 
  delay(500);       
  noteOff(0, 35, 100);  
  MidiUSB.flush();
  }
  else if (result2 > 514 && (result2 < 682)) {
  Serial.println("1-2");
  noteOn(0, 36, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 36, 100);
  MidiUSB.flush();
  }
  else if (result2 > 683 && (result2 < 767)) {
  Serial.println("1-3");
  noteOn(0, 37, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 37, 100);
  MidiUSB.flush();
  }
  else if (result2 > 767 && (result2 < 819)) {
  Serial.println("1-4");
  noteOn(0, 38, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 38, 100);
  MidiUSB.flush();
  }
  else if (result2 > 820 && (result2 < 853)) {
  Serial.println("1-5");
  noteOn(0, 39, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 39, 100);
  MidiUSB.flush();
  }
  else if (result2 > 854 && (result2 < 878)) {
  Serial.println("1-6");
  noteOn(0, 40, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 40, 100);
  MidiUSB.flush();
  }
  else if (result2 >900) {
  Serial.println("0");
  }  


  if (result3 > 500 && (result3 < 513)) {
  Serial.println("2-1");
  noteOn(0, 41, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 41, 100);
  MidiUSB.flush();
  }
  else if (result3 > 514 && (result3 < 682)) {
  Serial.println("2-2");
  noteOn(0, 42, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 42, 100);
  MidiUSB.flush();
  }
  else if (result3 > 683 && (result3 < 767)) {
  Serial.println("2-3");
  noteOn(0, 43, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 43, 100);
  MidiUSB.flush();
  }
  else if (result3 > 767 && (result3 < 819)) {
  Serial.println("2-4");
  noteOn(0, 44, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 44, 100);
  MidiUSB.flush();
  }
  else if (result3 > 820 && (result3 < 853)) {
  Serial.println("2-5");
  noteOn(0, 45, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 45, 100);
  MidiUSB.flush();
  }
  else if (result3 > 854 && (result3 < 878)) {
  Serial.println("2-6");
  noteOn(0, 46, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 46, 100);
  MidiUSB.flush();
  }
  else if (result3 > 879) {
  Serial.println("0");
  }

if (result4 > 508 && (result4 < 513)) {
  Serial.println("3-1");
  noteOn(0, 47, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 47, 100);
  MidiUSB.flush();
  }
  else if (result4 > 514 && (result4 < 682)) {
  Serial.println("3-2");
  noteOn(0, 48, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 48, 100);
  MidiUSB.flush();
  }
  else if (result4 > 683 && (result4 < 780)) {
  Serial.println("3-3");
  noteOn(0, 49, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 49, 100);
  MidiUSB.flush();
  }
  else if (result4 > 790 && (result4 < 819)) {
  Serial.println("3-4");
  noteOn(0, 51, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 51, 100);
  MidiUSB.flush();
  }
  else if (result4 > 820 && (result4 < 853)) {
  Serial.println("3-5");
  noteOn(0, 52, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 52, 100);
  MidiUSB.flush();
  }
  else if (result4 > 854 && (result4 < 878)) {
  Serial.println("3-6");
  noteOn(0, 53, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 53, 100);
  MidiUSB.flush();
  }
  else if (result4 > 879) {
  Serial.println("0");
  }  

if (result5 > 500 && (result5 < 600)) {
  Serial.println("4-1");
  noteOn(0, 54, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 54, 100);
  MidiUSB.flush();
  }
  else if (result5 > 670 && (result5 < 700)) {
  Serial.println("4-2");
  noteOn(0, 55, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 55, 100);
  MidiUSB.flush();
  }
  else if (result5 > 740 && (result5 < 796)) {
  Serial.println("4-3");
  noteOn(0, 56, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 56, 100);
  MidiUSB.flush();
  }
  else if (result5 > 800 && (result5 < 835)) {
  Serial.println("4-4");
  noteOn(0, 57, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 57, 100);
  MidiUSB.flush();
  }
  else if (result5 > 840 && (result5 < 860)) {
  Serial.println("4-5");
  noteOn(0, 58, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 58, 100);
  MidiUSB.flush();
  }
  else if (result5 > 870 && (result5 < 900)) {
  Serial.println("4-6");
  noteOn(0, 59, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 59, 100);
  MidiUSB.flush();
  }
  else if (result5 > 879) {
  Serial.println("0");
  }  

  if (result6 > 508 && (result6 < 513)) {
  Serial.println("5-1");
  noteOn(0, 60, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 60, 100);
  MidiUSB.flush();
  }
  else if (result6 > 514 && (result6 < 682)) {
  Serial.println("5-2");
  noteOn(0, 61, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 61, 100);
  MidiUSB.flush();
  }
  else if (result6 > 683 && (result6 < 767)) {
  Serial.println("5-3");
  noteOn(0, 62, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 62, 100);
  MidiUSB.flush();
  }
  else if (result6 > 767 && (result6 < 830)) {
  Serial.println("5-4");
  noteOn(0, 63, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 63, 100);
  MidiUSB.flush();
  }
  else if (result6 > 831 && (result6 < 853)) {
  Serial.println("5-5");
  noteOn(0, 64, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 64, 100);
  MidiUSB.flush();
  }
  else if (result6 > 854 && (result6 < 878)) {
  Serial.println("5-6");
  noteOn(0, 65, 100);
  MidiUSB.flush();
  delay(1000);   
  noteOff(0, 65, 100);
  MidiUSB.flush();
  }
  else if (result6 > 879) {
  Serial.println("0");
  }  
  //imprime a informação no monitor serial

  delay(1000);

}
int readAnalogButton(int inputPin) {
  int button = analogRead(inputPin);
}