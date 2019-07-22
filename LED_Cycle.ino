/*
  
  Description: 
  Use the onboard LED on pin 13, a red LED on a second digital pin of your choice and a green LED on a third
  digital pin of your choice.
  Have these three LED’s cycle so only one LED is on at any given point in time. 
  So your onboard LED should turn on, then it should turn off and your red LED should turn on, 
  then it should turn off and your green LED should turn
  on, then onboard, then red, then green, etc . . .
  The digital pins should be labeled 0-13 on your board.
  Each off-board LED should be connected to a 220 Ohm resistor.
  References: blink, example program
*/
int pin= 12;                            //pin for RED LED
int pin2= 11;                           //pin for GREEN LED
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pin, OUTPUT);
  pinMode(pin2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);     // turn the Buitlin LED on (HIGH is the voltage level)
  digitalWrite(pin, LOW);              // turn the builtin LED off by making the voltage LOW
  digitalWrite(pin2, LOW);             // turn the green LED off by making the voltage LOW  
  delay(1000);                         // wait for a second
  digitalWrite(pin, HIGH);             // turn the red LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, LOW);      // turn the builtin LED off by making the voltage LOW
  digitalWrite(pin2, LOW);             // turn the green LED off by making the voltage LOW  
  delay(1000);                         // wait for a second
  digitalWrite(pin2, HIGH);            // turn the green LED on by making the voltage HIGH
  digitalWrite(LED_BUILTIN, LOW);      // turn the builtin LED off by making the voltage LOW        
  digitalWrite(pin, LOW);              // turn the builtin LED off by making the voltage LOW
  delay(1000);                         // wait for a second
}
