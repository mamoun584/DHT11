int r1 = 8 ;
int g  = 9 ;
int o1 = 10;
int r2 = 11;
int o2 = 12;
int d  = 50;
int d2 =100;
int buttonState;

void setup() {
               pinMode(r1, OUTPUT);
               pinMode(g , OUTPUT);
               pinMode(o1, OUTPUT);
               pinMode(r2, OUTPUT);
               pinMode(o2, OUTPUT);
               pinMode(7 , INPUT);                               
}
void loop() {
  buttonState=digitalRead(7);   
if(buttonState==1){
         for(int i=0;i<5;i++){
                      digitalWrite(r1, HIGH);delay(d);
                      digitalWrite(g , HIGH);delay(d);
                      digitalWrite(o1, HIGH);delay(d);
                      digitalWrite(r2, HIGH);delay(d);
                      digitalWrite(o2, HIGH);delay(d);
                                               digitalWrite(r1, LOW);delay (d);
                                               digitalWrite(g , LOW);delay (d);
                                               digitalWrite(o1, LOW);delay (d);
                                               digitalWrite(r2, LOW);delay (d);
                                               digitalWrite(o2, LOW);delay (d);
                                               digitalWrite(o2, HIGH);delay(d);
                      digitalWrite(r2 , HIGH);delay(d);
                      digitalWrite(o1 , HIGH);delay(d);
                      digitalWrite(g , HIGH);delay(d);
                      digitalWrite(r1, HIGH);delay(d);
                                               digitalWrite(o2, LOW);delay (d);
                                               digitalWrite(r2 , LOW);delay (d);
                                               digitalWrite(o1, LOW);delay (d);
                                               digitalWrite(g, LOW);delay (d);
                                               digitalWrite(r1, LOW);delay (d);
                                               }
       
                      }else{  digitalWrite(r1 , 0);
                      digitalWrite(o1 , 0);delay(d2);digitalWrite(r1,LOW);digitalWrite(o1,LOW);delay (d2);
                      digitalWrite(g  , 0);
                      digitalWrite(r2 , 0);delay(d2);digitalWrite(g, LOW);digitalWrite(r2,LOW);delay (d2);      
                      digitalWrite(o2 , 0);delay(d2); 
                        }
                         int na=random(8,13);
        digitalWrite(na,HIGH);delay(d2);digitalWrite(na, LOW);delay (d2);
                      }
