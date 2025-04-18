# USB-Rubber


## Description

Arduino library allows you to send keyboard codes to the computer using simple functions, making it easy to interact with the system efficiently and quickly. This library is ideal for projects that require controlling the user interface or creating interactive applications that depend on user input.

## Installation

Clone this repo or download the ZIP and install it via Arduino IDE.

## Example

`cpp
#include <Wire.h>

#include "usbrubber.h"

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
    
    ur.press("WIN"); // FOR WIN KEY.
    ur.press("R"); // FOR R KEY.
    ur.print("POWERSHELL"); // Write Statement POWERSHELL to open POWERSHELL window.
    ur.press("ENTER"); // FOR ENTER KEY.

    break;
  }
}
