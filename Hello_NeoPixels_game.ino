#include <Adafruit_CircuitPlayground.h>
                                                             //장비를 오늘받아 새로시작해서 구현해보고싶은걸 구현까지 해보지못했음.
                                                             //서킷 플레이그라운드는 0부터 255까지 숫자를 조합해서 다양한 색상을 구현할수있었음


void setup() {                                              //구현해보고 싶었던것..   서킷 플레이그라운드와 버튼 그리고 피에조를 이용한 두더지게임..
                                                             //버튼을누르면 두더지게임 시작
  Serial.begin(9600);                                       //두더지게임 처럼 주황불이 들어왔을떄 일정시간안에 버튼을 눌렀 을시 피에조가 울리게끔 구현하고싶었음.
                                                            
  CircuitPlayground.begin();                                

                                                          
}

void loop() {
  
  CircuitPlayground.clearPixels();                                    
  delay(100);
  

  delay(500);


  //if (buttonState == 1){
  CircuitPlayground.setPixelColor(0, 255,0,0);                              //255,0,0빨강
 
//}
  delay(1000);
                            //255,0,0빨강
  CircuitPlayground.setPixelColor(1, 255,0,0);                              //128,128,0;노랑
 
  
  delay(1000);

                            //128,128,0;노랑
  CircuitPlayground.setPixelColor(2, 255,0,0);                              //0,128,128하늘
 

  delay(1000);

                               //0,128,128하늘
  CircuitPlayground.setPixelColor(3, 255,0,0);                            //0,255,0초록
  delay(1000);

  CircuitPlayground.setPixelColor(4, 255,0,0);
  delay(1000);

  CircuitPlayground.setPixelColor(5, 255,0,0);
  delay(1000);
  CircuitPlayground.setPixelColor(6, 255,0,0);
  delay(1000);
  CircuitPlayground.setPixelColor(7, 255,0,0);
  delay(1000);
  CircuitPlayground.setPixelColor(8, 255,0,0);
  delay(1000);
  CircuitPlayground.setPixelColor(9, 255,0,0);
  delay(1000);
  CircuitPlayground.setPixelColor(0, 0,0,0);
  CircuitPlayground.setPixelColor(1, 0,0,0);
  CircuitPlayground.setPixelColor(2, 0,0,0);
  CircuitPlayground.setPixelColor(3, 0,0,0);
  CircuitPlayground.setPixelColor(4, 0,0,0);
  CircuitPlayground.setPixelColor(5, 0,0,0);
  CircuitPlayground.setPixelColor(6, 0,0,0);
  CircuitPlayground.setPixelColor(7, 0,0,0);
  CircuitPlayground.setPixelColor(8, 0,0,0);
  CircuitPlayground.setPixelColor(9, 0,0,0);
  delay(4000);

  CircuitPlayground.setPixelColor(0, 0,0,0);
  CircuitPlayground.setPixelColor(1, 0,0,0);
  CircuitPlayground.setPixelColor(2, 0,0,0);
  CircuitPlayground.setPixelColor(3, 0,0,0);
  CircuitPlayground.setPixelColor(4, 0,0,0);
  CircuitPlayground.setPixelColor(5, 102,051,0);
  CircuitPlayground.setPixelColor(6, 0,0,0);
  CircuitPlayground.setPixelColor(7, 0,0,0);
  CircuitPlayground.setPixelColor(8, 0,0,0);
  CircuitPlayground.setPixelColor(9, 0,0,0);
  
  delay(4000);
   
  CircuitPlayground.setPixelColor(0, 0,0,0);
  CircuitPlayground.setPixelColor(1, 0,0,0);
  CircuitPlayground.setPixelColor(2, 102,051,0);
  CircuitPlayground.setPixelColor(3, 0,0,0);
  CircuitPlayground.setPixelColor(4, 0,0,0);
  CircuitPlayground.setPixelColor(5, 0,0,0);
  CircuitPlayground.setPixelColor(6, 0,0,0);
  CircuitPlayground.setPixelColor(7, 0,0,0);
  CircuitPlayground.setPixelColor(8, 0,0,0);
  CircuitPlayground.setPixelColor(9, 0,0,0);
  
  delay(4000);
   
  CircuitPlayground.setPixelColor(0, 0,0,0);
  CircuitPlayground.setPixelColor(1, 0,0,0);
  CircuitPlayground.setPixelColor(2, 0,0,0);
  CircuitPlayground.setPixelColor(3, 0,0,0);
  CircuitPlayground.setPixelColor(4, 0,0,0);
  CircuitPlayground.setPixelColor(5, 0,0,0);
  CircuitPlayground.setPixelColor(6, 0,0,0);
  CircuitPlayground.setPixelColor(7, 0,0,0);
  CircuitPlayground.setPixelColor(8, 102,051,0);
  CircuitPlayground.setPixelColor(9, 0,0,0);

  delay(5000);
  





  CircuitPlayground.setPixelColor(0, 102,051,0);
  CircuitPlayground.setPixelColor(1, 0,0,0);
  CircuitPlayground.setPixelColor(2, 0,0,0);
  CircuitPlayground.setPixelColor(3, 102,051,0);
  CircuitPlayground.setPixelColor(4, 0,0,0);
  CircuitPlayground.setPixelColor(5, 0,0,0);
  CircuitPlayground.setPixelColor(6, 102,051,0);
  CircuitPlayground.setPixelColor(7, 0,0,0);
  CircuitPlayground.setPixelColor(8, 0,0,0);
  CircuitPlayground.setPixelColor(9, 0,0,0);
  
  delay(10000);
  
  CircuitPlayground.setPixelColor(9, 255,102,204);
  //delay(100);
  CircuitPlayground.setPixelColor(8, 255,000,204);
  //delay(100);
  CircuitPlayground.setPixelColor(7, 255,153,204);
  //delay(100);
  CircuitPlayground.setPixelColor(6, 000,051,255);
  //delay(100);
  CircuitPlayground.setPixelColor(5, 000,102,051);
  //delay(100);
  CircuitPlayground.setPixelColor(4, 153,000,255);
  //delay(100);
  CircuitPlayground.setPixelColor(3, 051,200,254);
  //delay(100);
  CircuitPlayground.setPixelColor(2, 051,000,000);
  //delay(100);
  CircuitPlayground.setPixelColor(1, 255,102,204);  
 // delay(100);
  CircuitPlayground.setPixelColor(0, 255,102,204);
 // delay(3000);
 delay(2000);

   CircuitPlayground.setPixelColor(9, 255,102,204);
  //delay(100);
  CircuitPlayground.setPixelColor(8, 255,000,204);
  //delay(100);
  CircuitPlayground.setPixelColor(7, 255,153,204);
  //delay(100);
  CircuitPlayground.setPixelColor(6, 000,051,255);
  //delay(100);
  CircuitPlayground.setPixelColor(5, 000,102,051);
  //delay(100);
  CircuitPlayground.setPixelColor(4, 153,000,255);
  //delay(100);
  CircuitPlayground.setPixelColor(3, 051,200,254);
  //delay(100);
  CircuitPlayground.setPixelColor(2, 051,000,000);
  //delay(100);
  CircuitPlayground.setPixelColor(1, 255,102,204);  
 // delay(100);
  CircuitPlayground.setPixelColor(0, 255,102,204);
 // delay(3000);
  delay(1000);
  
  CircuitPlayground.setPixelColor(4, 153,000,051);
  delay(1000);
  CircuitPlayground.setPixelColor(8, 051,102,204);
  delay(1000);
  CircuitPlayground.setPixelColor(0, 255,102,204);
  delay(1000);
  CircuitPlayground.setPixelColor(0, 255,102,204);
  delay(1000);
  CircuitPlayground.setPixelColor(0, 255,102,204);
  delay(1000);
  CircuitPlayground.setPixelColor(0, 255,102,204);
  delay(1000);
  CircuitPlayground.setPixelColor(0, 255,102,204);
  delay(1000);
}
