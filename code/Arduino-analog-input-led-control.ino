int gl=13;
int yl=12;
int rl=8;
int ptm=A1;
int rvalue;
float v;
void setup() {
  pinMode (gl, OUTPUT) ;
  pinMode(yl, OUTPUT) ;
  pinMode (rl, OUTPUT) ;
}
void loop() {
  rvalue=analogRead(ptm) ;
  v=(5.0/1023.0)*rvalue;
  if (v>=0 && v<= 3) {
    digitalWrite(gl,HIGH);
    digitalWrite(yl,LOW);
    digitalWrite(rl,LOW);
  }
  if (v>3 && v <= 4) {
    digitalWrite(yl, HIGH) ;
    digitalWrite(rl,LOW);
  }

  if (v>4 && v <= 5) {
    digitalWrite(rl, HIGH);

  }

}