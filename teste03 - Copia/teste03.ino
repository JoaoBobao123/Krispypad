#define INPUT_PIN A0

void setup() {
  Serial.begin(9600);
  pinMode(INPUT_PIN, INPUT);
}

void loop() {
  int result = readAnalogButton();
  Serial.println(result);
}

int readAnalogButton() {
  int button = analogRead(INPUT_PIN);
  if (button > 900) return 0;
  if (button < 600) return 1;
  if (button < 700) return 2;
  if (button < 800) return 3;
  if (button < 830) return 4;
  if (button < 860) return 5;
  if (button < 890) return 6;
  }
