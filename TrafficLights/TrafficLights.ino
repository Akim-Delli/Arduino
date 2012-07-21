
// project 3 - Traffic lights

int ledDelay = 3000;
int redPin = 9;
int yellowPin = 10;
int greenPin = 11;

void setup(){
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop(){
    digitalWrite(redPin, HIGH); // turn the red light on
    delay(ledDelay);            // wait 4 seconds
    
    digitalWrite(yellowPin, HIGH); // turn the yellow light on
    delay(2000);                   // wait 2 seconds
    
    digitalWrite(greenPin, HIGH); // turn the green light on
    digitalWrite(redPin, LOW);    // turn the red light off
    digitalWrite(yellowPin, LOW); // turn the yellow light off
    delay(ledDelay);              // wait 4 seconds
    
    digitalWrite(yellowPin, HIGH); // turn the yellow light on
    digitalWrite(greenPin, LOW);   // turn the green light off
    delay(ledDelay);               // wait 4 seconds
    
    digitalWrite(yellowPin, LOW);
    // now the loop repeats
}
