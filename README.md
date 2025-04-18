# USB-Rubber


## Description

Arduino library allows you to send keyboard codes to the computer using simple functions, making it easy to interact with the system efficiently and quickly. This library is ideal for projects that require controlling the user interface or creating interactive applications that depend on user input.

## Installation

Clone this repo or download the ZIP and install it via Arduino IDE.

## Key Table Supported

| الاسم Key Name      | القيمة Value |
|------------------------|----------------|
| 0 Key                 | K0             |
| 1 Key                 | K1             |
| 2 Key                 | K2             |
| 3 Key                 | K3             |
| 4 Key                 | K4             |
| 5 Key                 | K5             |
| 6 Key                 | K6             |
| 7 Key                 | K7             |
| 8 Key                 | K8             |
| 9 Key                 | K9             |
| A Key                 | KA             |
| B Key                 | KB             |
| C Key                 | KC             |
| D Key                 | KD             |
| E Key                 | KE             |
| F Key                 | KF             |
| G Key                 | KG             |
| H Key                 | KH             |
| I Key                 | KI             |
| J Key                 | KJ             |
| K Key                 | KK             |
| L Key                 | KL             |
| M Key                 | KM             |
| N Key                 | KN             |
| O Key                 | KO             |
| P Key                 | KP             |
| Q Key                 | KQ             |
| R Key                 | KR             |
| S Key                 | KS             |
| T Key                 | KT             |
| U Key                 | KU             |
| V Key                 | KV             |
| W Key                 | KW             |
| X Key                 | KX             |
| Y Key                 | KY             |
| Z Key                 | KZ             |
| Enter Key             | ENTER          |
| Windows Key (WIN)     | WIN            |


## Example

```cpp
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
```





