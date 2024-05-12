#include "DHT.h"
#define DHTPIN 10 
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  float t = dht.readTemperature();
    if (isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  float hic = dht.computeHeatIndex(t, false);
    Serial.print(F("%  Temperature: "));
  Serial.println(t);
}
