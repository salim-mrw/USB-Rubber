#include "usbrubber.h"

namespace usb_rubber{

usbrubber::usbrubber(){

  this->K0 = _K0;
  this->K1 = _K1;
  this->K2 = _K2;
  this->K3 = _K3;
  this->K4 = _K4;
  this->K5 = _K5;
  this->K6 = _K6;
  this->K7 = _K7;
  this->K8 = _K8;
  this->K9 = _K9;

  this->KA = _KA;
  this->KB = _KB;
  this->KC = _KC;
  this->KD = _KD;
  this->KE = _KE;
  this->KF = _KF;
  this->KG = _KG;
  this->KH = _KH;
  this->KI = _KI;
  this->KJ = _KJ;
  this->KK = _KK;
  this->KL = _KL;
  this->KM = _KM;
  this->KN = _KN;
  this->KO = _KO;
  this->KP = _KP;
  this->KQ = _KQ;
  this->KR = _KR;
  this->KS = _KS;
  this->KT = _KT;
  this->KU = _KU;
  this->KV = _KV;
  this->KW = _KW;
  this->KX = _KX;
  this->KY = _KY;
  this->KZ = _KZ;
  
  this->ENTER = _ENTER;  
  this->WIN = _WIN;

}
    
  void usbrubber::begin(){
    Keyboard.begin();
  }
  
  void usbrubber::print(String text){
    Keyboard.print(text);  
  }
  
  void usbrubber::press(String key){
    if(key == "0"){
        Keyboard.press(K0);
        Keyboard.release(K0);
    }
    
    if(key == "1"){
        Keyboard.press(K1);
        Keyboard.release(K1);
    }
  
     if(key == "2"){
        Keyboard.press(K2);
        Keyboard.release(K2);
     }
  
     if(key == "3"){
        Keyboard.press(K3);
        Keyboard.release(K3);
     }

     if(key == "4"){
        Keyboard.press(K4);
        Keyboard.release(K4);
     }

     if(key == "5"){
        Keyboard.press(K5);
        Keyboard.release(K5);
     }

     if(key == "6"){
        Keyboard.press(K6);
        Keyboard.release(K6);
     }

     if(key == "7"){
        Keyboard.press(K7);
        Keyboard.release(K7);
     }

     if(key == "8"){
        Keyboard.press(K8);
        Keyboard.release(K8);
     }

     if(key == "9"){
        Keyboard.press(K9);
        Keyboard.release(K9);
     }

     if(key == "A" || key == "a"){
        Keyboard.press(KA);
        Keyboard.release(KA);
     }

     if(key == "B" || key == "b"){
        Keyboard.press(KB);
        Keyboard.release(KB);
     }

     if(key == "C" || key == "c"){
        Keyboard.press(KC);
        Keyboard.release(KC);
     }

     if(key == "D" || key == "d"){
        Keyboard.press(KD);
        Keyboard.release(KD);
     }

     if(key == "E" || key == "e"){
        Keyboard.press(KE);
        Keyboard.release(KE);
     }

     if(key == "F" || key == "f"){
        Keyboard.press(KF);
        Keyboard.release(KF);
     }

     if(key == "G" || key == "g"){
        Keyboard.press(KG);
        Keyboard.release(KG);
     }

     if(key == "H" || key == "h"){
        Keyboard.press(KH);
        Keyboard.release(KH);
     }

     if(key == "I" || key == "i"){
        Keyboard.press(KI);
        Keyboard.release(KI);
     }

     if(key == "J" || key == "j"){
        Keyboard.press(KJ);
        Keyboard.release(KJ);
     }

     if(key == "K" || key == "k"){
        Keyboard.press(KK);
        Keyboard.release(KK);
     }

     if(key == "L" || key == "l"){
        Keyboard.press(KL);
        Keyboard.release(KL);
     }

     if(key == "M" || key == "m"){
        Keyboard.press(KM);
        Keyboard.release(KM);
     }

     if(key == "N" || key == "n"){
        Keyboard.press(KN);
        Keyboard.release(KN);
     }

     if(key == "O" || key == "o"){
        Keyboard.press(KO);
        Keyboard.release(KO);
     }

     if(key == "P" || key == "p"){
        Keyboard.press(KP);
        Keyboard.release(KP);
     }

     if(key == "Q" || key == "q"){
        Keyboard.press(KQ);
        Keyboard.release(KQ);
     }

     if(key == "R" || key == "r"){
        Keyboard.press(KR);
        delay(100);
        Keyboard.release(KR);
     }

     if(key == "S" || key == "s"){
        Keyboard.press(KS);
        Keyboard.release(KS);
     }

     if(key == "T" || key == "t"){
        Keyboard.press(KT);
        Keyboard.release(KT);
     }

     if(key == "U" || key == "u"){
        Keyboard.press(KU);
        Keyboard.release(KU);
     }

     if(key == "V" || key == "v"){
        Keyboard.press(KV);
        Keyboard.release(KV);
     }

     if(key == "W" || key == "w"){
        Keyboard.press(KW);
        Keyboard.release(KW);
     }

     if(key == "X" || key == "x"){
        Keyboard.press(KX);
        Keyboard.release(KX);
     }

     if(key == "Y" || key == "y"){
        Keyboard.press(KY);
        Keyboard.release(KY);
     }

     if(key == "Z" || key == "z"){
        Keyboard.press(KZ);
        Keyboard.release(KZ);
     }

     if(key == "ENTER" || key == "enter"){
        delay(200);
        Keyboard.press(ENTER);
        Keyboard.release(ENTER);
     }

     if(key == "WIN" || key == "WIN"){
        Keyboard.press(WIN);
        Keyboard.release(WIN);
        delay(200);
     }
  };

  void usbrubber::end(){
    Keyboard.releaseAll();
    Keyboard.end();  
  };
  
};
