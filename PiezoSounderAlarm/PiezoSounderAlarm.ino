
// Project 11 - Piezo Sounder Alarm

float sinVal;
int toneVal;

void setup(){ 
 pinMode(13, OUTPUT);
}

void loop(){
  for (int x=0; x<180; x++) {
    // convert degrees to radians then obten sin value
    sinVal = (sin(x*(3.1412/180)));
    //generate a frequency from the sin value
    toneVal = 2000 + (int(sinVal*1000));
    tone( 13, toneVal);
    delay(2);
  }
}
