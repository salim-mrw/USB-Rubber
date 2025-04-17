#include <Wire.h>

#include "usbrubber.h"

/*
* This function simulates the keyboard shortcut to open PowerShell 
* on Windows, using the usbrubber library.
* The WIN + R keys are pressed to open the Run dialog,
* followed by entering the command "powershell" and then hitting Enter.
*/

int flag;

usbrubber ur_obj;

void setup(){

  Serial.begin(9600);
  ur_obj.begin();
  
}

void loop(){
  flag = Serial.read();
  switch(flag){
  
    case '1':
    
    ur.press('11'); // FOR WIN KEY.
    ur.press('R'); // FOR R KEY.
    ur.print('POWERSHELL'); // Write Statement POWERSHELL to open POWERSHELL window.
    ur.press('10'); // FOR ENTER KEY.

    break;
  }
}
