#define PB 4
void setup() {
  Serial.begin(9600);
  pinMode(PB,INPUT);
  Serial.print("Circute with PB");


}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(PB)==1)
{
  Serial.println("PB Pressed");
}
if (digitalRead(PB)==0)
{
  Serial.println("PB Released");
}

}
