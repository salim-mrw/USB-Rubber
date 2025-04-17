#ifndef USBRUBBER_H
#define USBRUBBER_H

#include <Arduino.h>
#include <Keyboard.h>

namespace usb_rubber{
  
  class usbrubber{
    
    private:
    
      uint16_t _K0 = 0x30; //0 key
      uint16_t _K1 = 0x31; //1 key
      uint16_t _K2 = 0x32; //2 key
      uint16_t _K3 = 0x33; //3 key
      uint16_t _K4 = 0x34; //4 key
      uint16_t _K5 = 0x35; //5 key
      uint16_t _K6 = 0x36; //6 key
      uint16_t _K7 = 0x37; //7 key
      uint16_t _K8 = 0x38; //8 key
      uint16_t _K9 = 0x39; //9 key
      
      uint16_t _KA = 0x41; //A key
      uint16_t _KB = 0x42; //B key
      uint16_t _KC = 0x43; //C key
      uint16_t _KD = 0x44; //D key
      uint16_t _KE = 0x45; //E key
      uint16_t _KF = 0x46; //F key
      uint16_t _KG = 0x47; //G key
      uint16_t _KH = 0x48; //H key
      uint16_t _KI = 0x49; //I key
      uint16_t _KJ = 0x4A; //J key
      uint16_t _KK = 0x4B; //K key
      uint16_t _KL = 0x4C; //L key
      uint16_t _KM = 0x4D; //M key
      uint16_t _KN = 0x4E; //N key
      uint16_t _KO = 0x4F; //O key
      uint16_t _KP = 0x50; //P key
      uint16_t _KQ = 0x51; //Q key
      uint16_t _KR = 0x52; //R key
      uint16_t _KS = 0x53; //S key
      uint16_t _KT = 0x54; //T key
      uint16_t _KU = 0x55; //U key
      uint16_t _KV = 0x56; //Y key
      uint16_t _KW = 0x57; //W key
      uint16_t _KX = 0x58; //X key
      uint16_t _KY = 0x59; //Y key
      uint16_t _KZ = 0x5A; //Z key

      uint16_t _ENTER = 0xE0;
      uint16_t _WIN = 0x83;

    public:

      uint16_t K0;
      uint16_t K1;
      uint16_t K2;
      uint16_t K3;
      uint16_t K4;
      uint16_t K5;
      uint16_t K6;
      uint16_t K7;
      uint16_t K8;
      uint16_t K9;
      
      uint16_t KA;
      uint16_t KB;
      uint16_t KC;
      uint16_t KD;
      uint16_t KE;
      uint16_t KF;
      uint16_t KG;
      uint16_t KH;
      uint16_t KI;
      uint16_t KJ;
      uint16_t KK;
      uint16_t KL;
      uint16_t KM;
      uint16_t KN;
      uint16_t KO;
      uint16_t KP;
      uint16_t KQ;
      uint16_t KR;
      uint16_t KS;
      uint16_t KT;
      uint16_t KU;
      uint16_t KV;
      uint16_t KW;   
      uint16_t KX;
      uint16_t KY;
      uint16_t KZ;  

      uint16_t ENTER;
      uint16_t WIN; 
    
      usbrubber();

      void begin();
      
      void print(String text);
      
      void press(String key);

      void end();
      
  };
}

#endif
