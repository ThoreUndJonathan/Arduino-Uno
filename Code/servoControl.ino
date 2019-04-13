#include <Keypad.h>                   //Der nchfolgende Code ist bis Zeile 21 ist diesem Link zu entenehmen: http://www.circuitbasics.com/how-to-set-up-a-keypad-on-an-arduino/ . Die Ausnahmen bestehen in den Zeilen 2, 4 und 16.
#include <Servo.h>

Servo bspServo;

const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

int bspDegree = 90;

byte rowPins[ROWS] = {2, 3, 4, 5}; 
byte colPins[COLS] = {7, 8, 9, 10}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
  bspServo.attach(11);
  bspServo.write(90);
}
  
void loop(){
  char Key = customKeypad.getKey();
  
  if(Key){
    Serial.println(Key);
    if(Key == '2'){
      bspDegree = bspDegree + 5;
      bspServo.write(bspDegree);
    }
    else if(Key == '8'){
      bspDegree = bspDegree - 5;
      bspServo.write(bspDegree);
    }
    else if(Key == '4'){
      bspDegree = bspDegree + 1;
      bspServo.write(bspDegree);
    }
    else if(Key == '6'){
      bspDegree = bspDegree - 1;
      bspServo.write(bspDegree);
    }
    else if(Key == 'A'){
      bspDegree = 90;
      bspServo.write(bspDegree);
    }
  }
  delay(50);
}
