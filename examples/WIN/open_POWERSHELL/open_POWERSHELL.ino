#include "usbrubber.h"

/*
* This function simulates the keyboard shortcut to open PowerShell 
* on Windows, using the usbrubber library.
* The WIN are pressed to open the menu ,
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
    
    ur.press("WIN"); // FOR WIN KEY.
    ur.press("R"); // FOR R KEY.
    ur.print("POWERSHELL"); // Write Statement POWERSHELL to open POWERSHELL window.
    ur.press("ENTER"); // FOR ENTER KEY.

    break;
  }
}
