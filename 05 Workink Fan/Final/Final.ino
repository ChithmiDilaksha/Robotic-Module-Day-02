  // LED
#define GREEN 13
#define YELLOW 12
#define RED 11

  // MOTER CONTROLER
#define MF 7
#define MB 6
#define MS 5

  // Tempurture
#include "DHT.h"
#define DHTPIN 10 
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // LED
  pinMode(GREEN,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(RED,OUTPUT);

  // MOTER CONTROLER
   pinMode(MF,OUTPUT);
   pinMode(MB,OUTPUT);
   pinMode(MS,OUTPUT);

  // Tempurture
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void loop() {
  // LED
  // digitalWrite(GREEN,1);
  // digitalWrite(YELLOW,1);
  // digitalWrite(RED,1);
  // delay(1000);
  // digitalWrite(GREEN,0);
  // digitalWrite(YELLOW,0);
  // digitalWrite(RED,0);
  // delay(1000);

  // Tempurture
  float t = dht.readTemperature();
    if (isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  float hic = dht.computeHeatIndex(t, false);
    Serial.print(F("%  Temperature: "));
  Serial.println(t);





 if(25>t)
 {
  speed_1();
  digitalWrite(GREEN,0);
  digitalWrite(YELLOW,0);
  digitalWrite(RED,1);
  delay(1000);
 }

 else if (25>t>20){
  speed_2();
  digitalWrite(GREEN,0);
  digitalWrite(YELLOW,1);
  digitalWrite(RED,0);
  delay(1000);
 }
  else if (t>20){
  stop();
  digitalWrite(GREEN,1);
  digitalWrite(YELLOW,0);
  digitalWrite(RED,0);
  delay(1000);
 }
}


void speed_1()
{
    digitalWrite(MF,1);
    digitalWrite(MB,0);
    analogWrite(MS,100);
    delay(1000);
}
void speed_2()
{
    digitalWrite(MF,0);
    digitalWrite(MB,1);
    analogWrite(MS,100);
    delay(1000);
}
void stop()
{
   digitalWrite(MF,0);
    digitalWrite(MB,0);
    analogWrite(MS,100);
    delay(1000);
}
