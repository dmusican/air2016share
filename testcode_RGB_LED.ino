/*
USing the RGB LED (Keyes K851261)
*/
 
int redPin = A0;
int bluePin = A1;
int greenPin = A2;
 
 
void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);  
}
 
void loop () {
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(255, 255, 0);  // yellow
  delay(1000);  
  setColor(80, 0, 80);  // purple
  delay(1000);
  setColor(0, 255, 255);  // aqua
  delay(1000);
}

void setColor(int red, int green, int blue)
{
//  red = 255 - red;
//  green = 255 - green;
//  blue = 255 - blue;
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}


