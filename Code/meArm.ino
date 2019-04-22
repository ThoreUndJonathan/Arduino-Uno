#include "meArm.h"
#include <Keypad.h>
                      //Der nachfolgende Code wurde bis Zeile 17 von dieser Website übernommen: http://www.circuitbasics.com/how-to-set-up-a-keypad-on-an-arduino/
const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {13, 12, 11, 10}; 
byte colPins[COLS] = {8, 7, 4, 2}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

meArm arm;

void setup() {
  Serial.begin(1200);
  arm.begin(3, 5, 6, 9);
  customKeypad.setDebounceTime(50);
  arm.gotoPoint(50, 100, 50);
  arm.closeGripper();
  delay(2000);
}
                //Der nachfolgende Code ist diesem Code nachempfunden: https://github.com/yorkhackspace/meArm/blob/master/examples/meArm_Wii_Classic/meArm_Wii_Classic.ino
void loop() {
  
  char customKey = customKeypad.getKey();

  float fx = 0;
  float fy = 0;
  float fz = 0;

  if(customKey == '2'){
    fx = 5.0;
  }
  else if(customKey == '8'){
    fx = -5.0;
  }
  if(customKey == '4'){
    fy = 5.0;
  }
  else if(customKey == '6'){
    fy = -5.0;
  }
  if(customKey == 'A'){
    fz = 5.0;
  }
  else if(customKey == 'D'){
    fz = -5.0;
  }
  if(customKey == '*'){
    arm.openGripper();
  }
  else if(customKey == '#'){
    arm.closeGripper();
  }
  if(!(fx == 0 && fy == 0 && fz == 0))
    arm.goDirectlyTo(arm.getX() + fx, arm.getY() + fy, arm.getZ() + fz);

  delay(50);
}
