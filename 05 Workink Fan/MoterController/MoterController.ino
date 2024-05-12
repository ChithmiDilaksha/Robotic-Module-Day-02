#define MF 7
#define MB 6
#define MS 5

void setup() {
   pinMode(MF,OUTPUT);
   pinMode(MB,OUTPUT);
   pinMode(MS,OUTPUT);
}

void loop() {
    digitalWrite(MF,1);
    digitalWrite(MB,0);
    analogWrite(MS,100);
    delay(1000);
    digitalWrite(MF,0);
    digitalWrite(MB,1);
    analogWrite(MS,100);
    delay(1000);
    digitalWrite(MF,0);
    digitalWrite(MB,0);
    analogWrite(MS,100);
    delay(1000);
}
