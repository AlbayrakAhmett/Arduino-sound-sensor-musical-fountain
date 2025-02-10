int sensor = A0;
int redled = 7;
int greenled = 13;
int pump = 6;
#define REF 700
void setup()
{
  pinMode(sensor,INPUT);
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(pump,OUTPUT);
}
void loop()
{
  int sensor_value = analogRead (sensor);
  if (sensor_value>REF)
  {
    digitalWrite(greenled,HIGH);
    digitalWrite(redled,HIGH);
    digitalWrite(pump,HIGH);
    delay(50);
   }
   else
   {
    digitalWrite(greenled,LOW);
    digitalWrite(redled,LOW);
    digitalWrite(pump,LOW);
    delay(50);
   }
}