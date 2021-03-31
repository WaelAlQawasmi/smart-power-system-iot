#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
BlynkTimer timer;
char auth[] = "msQxoNj1taFZsVgXakJUGXQI6Bw3EYGG";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Umniah_82AE48";
char pass[] = "jo554422";
void myTimerEvent()
{
}
BLYNK_WRITE(V4)
{
 int pinValue = param.asInt(); // assigning incoming value from pin 
V1 to a variable
 
digitalWrite(D3,pinValue);
}
void setup()
{
 Serial.begin(9600);
 pinMode(D3,OUTPUT);
 Blynk.begin(auth, ssid, pass);
 timer.setInterval(1000L, myTimerEvent);
}
void loop()
{
 Blynk.run();
 timer.run();}
