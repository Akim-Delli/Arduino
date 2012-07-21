
// project 4 - Interactive Traffic lights

int carRed = 12;  // assign the car lights
int carYellow = 11;
int carGreen = 10;
int pedRed = 9;   // assign the pedestrian lights
int pedGreen = 8;
int button = 2;   // button pin
int crossTime = 5000; //time allowed to cross
unsigned long changeTime; //time since button pressed

void setup(){
    pinMode(carRed, OUTPUT);
    pinMode(carYellow, OUTPUT);
    pinMode(carGreen, OUTPUT);
    pinMode(pedRed, OUTPUT);
    pinMode(pedGreen, OUTPUT);
    pinMode(button, INPUT);
    // turn on the green light
    digitalWrite( carGreen, HIGH);
    digitalWrite( pedRed, HIGH);
}

void loop(){
  
    int state = digitalRead(button);
    /* Check if button is pressed and it is over 5 seconds since last button press*/
    if (state == HIGH && (millis() - changeTime)> 5000){
      // Call to function to change the lights
      changeLights();
    }
}

void changeLights(){
  
    digitalWrite(carGreen, LOW); // green off
    digitalWrite(carYellow, HIGH); // turn the yellow light on
    delay(2000);            // wait 2 seconds
    
    digitalWrite(carYellow, LOW); // green off
    digitalWrite(carRed, HIGH); // turn the red light on
    delay(1000);            // wait 2 seconds
    
    digitalWrite(pedRed, LOW); // ped red off
    digitalWrite(pedGreen, HIGH); // turn the yellow light on
    delay(crossTime);            // wait for preset time period
    
   
    // flash the ped green
    for (int x=0; x<10; x++){
       digitalWrite(pedGreen, HIGH); // green off
       delay(250);
       digitalWrite(pedGreen, LOW); // turn the yellow light on
       delay(250);           
    }
    // turn ped red on
    digitalWrite(pedRed, HIGH);
    delay(500);
    
    digitalWrite(carYellow, HIGH);
    digitalWrite(carRed, LOW);
    delay(1000);
    digitalWrite(carGreen, HIGH);
    digitalWrite(carYellow, LOW);
    
    //record the time since last change of lights
    changeTime = millis();
    // Then return to the main program loop
}
