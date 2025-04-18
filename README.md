# USB-Rubber


## Description

Arduino library allows you to send keyboard codes to the computer using simple functions, making it easy to interact with the system efficiently and quickly. This library is ideal for projects that require controlling the user interface or creating interactive applications that depend on user input.


## Installation

Clone this repo or download the ZIP and install it via Arduino IDE.


## Key Table Supported

This table shows all the supported key constants provided by the usbrubber class.  
You can use these constants to simulate keystrokes using the press() function.

| Key Name | Value |
|------------------------|----------------|
| 0 Key                 | 0             |
| 1 Key                 | 1             |
| 2 Key                 | 2             |
| 3 Key                 | 3             |
| 4 Key                 | 4             |
| 5 Key                 | 5             |
| 6 Key                 | 6             |
| 7 Key                 | 7             |
| 8 Key                 | 8             |
| 9 Key                 | 9             |
| A Key                 | A             |
| B Key                 | B             |
| C Key                 | C             |
| D Key                 | D             |
| E Key                 | E             |
| F Key                 | F             |
| G Key                 | G             |
| H Key                 | H             |
| I Key                 | I             |
| J Key                 | J             |
| K Key                 | K             |
| L Key                 | L             |
| M Key                 | M             |
| N Key                 | N             |
| O Key                 | O             |
| P Key                 | P             |
| Q Key                 | Q             |
| R Key                 | R             |
| S Key                 | S             |
| T Key                 | T             |
| U Key                 | U             |
| V Key                 | V             |
| W Key                 | W             |
| X Key                 | X             |
| Y Key                 | Y             |
| Z Key                 | Z             |
| Enter Key             | ENTER          |
| Windows Key (WIN)     | WIN            |


## Available Functions

The following functions are available in the usbrubber class for interacting with the keyboard:

| Function        | Description                                                                 |
|-----------------|-----------------------------------------------------------------------------|
| begin()       | Initializes the keyboard (wraps Keyboard.begin()).                        |
| print(text)   | Sends a string of text as if typed by a keyboard.                           |
| press(key)    | Presses a single key using one of the key constants listed above.           |
| end()       | end the keyboard (wraps Keyboard.end()).                        |


## Example open POWERSHELL


```cpp
#include <usbrubber.h>

int flag;

usbrubber ur;

void setup(){

  Serial.begin(9600);
  ur.begin();
  
}

void loop(){
  flag = Serial.read();
  switch(flag){
  
    case 1:
    
    ur.press("WIN"); // FOR WIN KEY.
    ur.print("POWERSHELL"); // Write Statement POWERSHELL to open POWERSHELL window.
    ur.press("ENTER"); // FOR ENTER KEY.
    ur.end();
    break;
  }
}
```





