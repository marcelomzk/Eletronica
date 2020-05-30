/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on NodeMCU.

  Note: This requires ESP8266 support package:
    https://github.com/esp8266/Arduino

  Please be sure to select the right NodeMCU module
  in the Tools -> Board menu!

  For advanced settings please follow ESP examples :
   - ESP8266_Standalone_Manual_IP.ino
   - ESP8266_Standalone_SmartConfig.ino
   - ESP8266_Standalone_SSL.ino

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "qz3xoTGoF3UQO4Q49BxdXlkZewpSbFBm";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "NWFS_EXT";
char pass[] = "XpT0;201209";


#define pino_termistor A0
#define blue 4
#define red 2



void setup()
{
  // Debug console
  Serial.begin(9600);
  
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  float sinVal;
  float ledVal;
  float leitura;
  float leitura1;
  leitura = analogRead(pino_termistor);
  leitura1 = (leitura*0.2027)-82;
  Blynk.virtualWrite(V0, leitura1);
  if(leitura1 > 23){
    for(int i=0;i < 180 ; i++){
      sinVal = (sin(i*(3.1412/180)));
      ledVal = int(sinVal*255);
      analogWrite(red, ledVal);
      delay(25);
    }
  }else{
    for(int j=0; j < 180;j++){
      sinVal = (sin(j*(3.1412/180)));
      ledVal = int(sinVal*255);
      analogWrite(blue, ledVal);
      delay(25);
   }
    
  }
  Blynk.run();
}
