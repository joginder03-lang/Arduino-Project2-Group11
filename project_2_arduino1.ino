// ***************************************************************
// * Project 2 - Sequential 6 LED Blinking                       *
// * Description: This program makes 6 LEDs blink one after      *
// * another with a 2-second delay between each LED.             *
// ***************************************************************

// Declare a variable for each LED pin
int led1 = 12; // LED 1 on pin 12
int led2 = 11; // LED 2 on pin 11
int led3 = 10; // LED 3 on pin 10
int led4 = 8;  // LED 4 on pin 8
int led5 = 6;  // LED 5 on pin 6
int led6 = 3;  // LED 6 on pin 3

void setup() {
  // The setup() function runs once when the board powers ON

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

  // All pins are now configured as OUTPUT to control the LEDs
}

void loop() {
  // The loop() function runs continuously

  digitalWrite(led1, HIGH);
  delay(2000);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(2000);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(2000);
  digitalWrite(led3, LOW);

  digitalWrite(led4, HIGH);
  delay(2000);
  digitalWrite(led4, LOW);

  digitalWrite(led5, HIGH);
  delay(2000);
  digitalWrite(led5, LOW);

  digitalWrite(led6, HIGH);
  delay(2000);
  digitalWrite(led6, LOW);

  // The cycle repeats, making each LED blink one after the other
}
