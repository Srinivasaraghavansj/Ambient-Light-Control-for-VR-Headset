#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define bulbpin D5

char auth[] = "e9185d69323d4d78b37f4e927ad45c3d";
char ssid[] = "Jalabulajangs";
char pass[] = "aaaaaaaaa";


BLYNK_WRITE(V3) {
if(param.asInt() == 1)
digitalWrite(bulbpin,LOW);
if(param.asInt() == 0)
digitalWrite(bulbpin,HIGH);
}

void setup() {
Blynk.begin(auth, ssid, pass);
pinMode(bulbpin, OUTPUT);
}

void loop() {
  Blynk.run();
}
