#include "myWiFi.h"

IPAddress initWiFi(const char* ssid, const char* password)
{
	WiFi.mode(WIFI_STA);
	WiFi.begin(ssid, password);
	Serial.print("Connecting to WiFi ..");
	while (WiFi.status() != WL_CONNECTED)
	{
		Serial.print('.');
		delay(1000);
	}

	IPAddress localIP = WiFi.localIP();
	Serial.println(localIP);

	return localIP;
}