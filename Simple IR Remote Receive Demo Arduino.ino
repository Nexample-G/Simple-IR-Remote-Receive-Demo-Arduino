/* 
 * Simple IR Remote Receive Demo Arduino
 * PHP Tutorial - https://youtu.be/y1AqSYsl62E
 * GitHub - https://github.com/Nexample-G/Simple-IR-Remote-Receive-Demo-Arduino
 * Dev: Nexample info.nexample@gmail.com
 */
#include <IRremote.h>
  IRrecv irrecv(A3);
  decode_results IR;
void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
}
void loop() {
  if (irrecv.decode(&IR)) {
      if (0) {
            Serial.println(IR.value, HEX);
      }
switch(IR.value){
  case 0x1FE50AF:  BTIR1();break;
  case 0x1FED827:  BTIR2();break;
  case 0x1FEF807:  BTIR3();break;
  case 0x1FE30CF:  BTIR4();break;
default : break;}
     irrecv.resume();
  }
}
void BTIR1(){
        Serial.println('1');
}
void BTIR2(){
        Serial.println('2');
}
void BTIR3(){
        Serial.println('3');
}
void BTIR4(){
        Serial.println('4');
}
