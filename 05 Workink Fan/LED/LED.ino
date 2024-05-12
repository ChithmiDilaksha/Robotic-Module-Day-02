#define GREEN 13
#define YELLOW 12
#define RED 11

void setup() {
  pinMode(GREEN,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(RED,OUTPUT);

}
void loop() {
  digitalWrite(GREEN,1);
  digitalWrite(YELLOW,1);
  digitalWrite(RED,1);
  delay(1000);
  digitalWrite(GREEN,0);
  digitalWrite(YELLOW,0);
  digitalWrite(RED,0);
  delay(1000);
}
