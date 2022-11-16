/*********
  Rui Santos
  Complete project details at https://RandomNerdTutorials.com/vs-code-platformio-ide-esp32-esp8266-arduino/
*********/

#include <Arduino.h>
#include "myWiFi.h"
// WiFi Credentials


const char* ssid = "iPhonetbt";
const char* password = "09272020";
IPAddress localIP = IPAddress();

void setup()
{
	Serial.begin(115200);
	// setup WiFi
	localIP = initWiFi(ssid, password);
	Serial.println(localIP);
	Serial.println("Setup done");
}

void loop()
{
	delay(1000);
}