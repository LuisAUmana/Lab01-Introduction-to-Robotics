/*
  Blink - Verifying both partners are able to upload code to the MSP432 board via LED Test
  Luis Umana and Alex Crotts, 2022-01-29
*/
#define RED 75    // Define RED of the tri-color LED as pin 75
#define GREEN 76  // Define GREEN of the tri-color LED as pin 76
#define BLUE 77   // Define BLUE of the tri-color LED as pin 77

void setup() {        // put your setup code here, to run once:
  // initialize one digital pin as outputs.
  pinMode(RED, OUTPUT);    //RED LED
  pinMode(GREEN, OUTPUT);    //GREEN LED
  pinMode(BLUE, OUTPUT);    //BLUE LED
}

void ALL_OFF() {           // All LEDS are off
  digitalWrite(RED, LOW);  // turn the RBG (RED) LED OFF
  digitalWrite(GREEN, LOW);  // turn the RBG (GREEN) LED OFF
  digitalWrite(BLUE, LOW);  // turn the RBG (BLUE) LED OFF
  delay(500);             // wait for half a second
}

void ALL_ON() {           // All LEDS are ON
  digitalWrite(RED, HIGH); // turn the RBG (RED) LED ON
  digitalWrite(GREEN, HIGH);  // turn the RBG (GREEN) LED ON
  digitalWrite(BLUE, HIGH); // turn the RBG (BLUE) LED ON
  delay(500);             // wait for half a second
}

void Red() {           // Red LED Function
  digitalWrite(RED, HIGH); // turn the RBG (RED) LED ON
  delay(500);             // wait for half a second
}

void Blue() {          // Blue LED Function
  digitalWrite(BLUE, HIGH); // turn the RBG (BLUE) LED ON
  delay(500);             // wait for half a second
}

void Green() {          // Green LED Function
  digitalWrite(GREEN, HIGH); // turn the RBG (GREEN) LED ON
  delay(500);             // wait for half a second
}

void Red_Green() {          // Red and Green LED Function
  digitalWrite(RED, HIGH); // turn the RBG (RED) LED ON
  digitalWrite(GREEN, HIGH); // turn the RBG (GREEN) LED ON
  delay(500);             // wait for half a second
}

void Blue_Green() {          // Blue and Green LED Function
 digitalWrite(BLUE, HIGH); // turn the RBG (BLUE) LED ON
 digitalWrite(GREEN, HIGH); // turn the RBG (GREEN) LED ON
 delay(500);
}

void Red_Blue() {          // Red and Blue LED Function
  digitalWrite(RED, HIGH); // turn the RBG (RED) LED ON
  digitalWrite(BLUE, HIGH); // turn the RBG (BLUE) LED ON
  delay(500);             // wait for half a second
}

void loop() {    // put your main code here, to run repeatedly:
  ALL_OFF();              // All LEDs off
  Red();                  // Red LED function
  ALL_OFF();              // All LEDs off
  Blue();                 // Blue LED function
  ALL_OFF();              // All LEDs off
  Green();                // Green LED function
  ALL_OFF();              // All LEDs off
  Red_Green();            // Red and Green LED function
  ALL_OFF();              // All LEDs off
  Blue_Green();           // Blue and Green LED function
  ALL_OFF();              // All LEDs off
  Red_Blue();             // Red and Blue LED function
  ALL_OFF();              // All LEDs off
  ALL_ON();               // All LEDs on
}

