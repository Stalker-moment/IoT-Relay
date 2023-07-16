//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//Define the relay pins
#define relay1 D0
#define relay2 D1
#define relay3 D2
#define relay4 D3
#define relay5 D5
#define relay6 D6
#define relay7 D7
#define relay8 D8

#define BLYNK_TEMPLATE_ID "TMPLSeYbwohI"
#define BLYNK_DEVICE_NAME "Mcu"
#define BLYNK_AUTH_TOKEN "VqR5Pyeqowm5spuFbnxVdxvy7hajKcIE"


char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Sinyo Home";//Enter your WIFI name
char pass[] = "Tier010707";//Enter your WIFI password


BLYNK_WRITE(V1) {
  bool value1 = param.asInt();
  if (value1 == 1) {
    digitalWrite(relay1, LOW);
     Serial.println("Relay 1 HIDUP");
  } else {
    digitalWrite(relay1, HIGH);
    Serial.println("relay 1 MATI");
  }
}


BLYNK_WRITE(V2) {
  bool value2 = param.asInt();
  if (value2 == 1) {
    digitalWrite(relay2, LOW);
    Serial.println("relay 2 HIDUP");
  } else {
    digitalWrite(relay2, HIGH);
    Serial.println("relay 2 MATI");
  }
}


BLYNK_WRITE(V3) {
  bool value3 = param.asInt();
  if (value3 == 1) {
    digitalWrite(relay3, LOW);
    Serial.println("relay 3 HIDUP");
  } else {
    digitalWrite(relay3, HIGH);
    Serial.println("relay 3 MATI");
  }
}


BLYNK_WRITE(V4) {
  bool value4 = param.asInt();
  if (value4 == 1) {
    digitalWrite(relay4, LOW);
    Serial.println("relay 4 HIDUP");
  } else {
    digitalWrite(relay4, HIGH);
    Serial.println("relay 4 MATI");
  }
}

//Get the button values
BLYNK_WRITE(V5) {
  bool value5 = param.asInt();
  if (value5 == 1) {
    digitalWrite(relay5, LOW);
    Serial.println("relay 5 HIDUP");
  } else {
    digitalWrite(relay5, HIGH);
    Serial.println("relay 5 MATI");
  }
}
//Get the button values
BLYNK_WRITE(V6) {
  bool value6 = param.asInt();
  if (value6 == 1) {
    digitalWrite(relay6, LOW);
    Serial.println("relay 6 HIDUP");
  } else {
    digitalWrite(relay6, HIGH);
    Serial.println("relay 6 MATI");
  }
}
//Get the button values
BLYNK_WRITE(V7) {
  bool value7 = param.asInt();
  if (value7 == 1) {
    digitalWrite(relay7, LOW);
    Serial.println("relay 7 HIDUP");
  } else {
    digitalWrite(relay7, HIGH);
    Serial.println("relay 7 MATI");
  }
}
//Get the button values
BLYNK_WRITE(V8) {
  bool value8 = param.asInt();
  if (value8 == 1) {
    digitalWrite(relay8, LOW);
    Serial.println("relay 8 HIDUP");
  } else {
    digitalWrite(relay8, HIGH);
    Serial.println("relay 8 MATI");
  }
}

void setup() {
  Serial.begin(115200);
  //Set the relay pins as output pins
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
  pinMode(relay7, OUTPUT);
  pinMode(relay8, OUTPUT);

  // Turn OFF the relay
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay5, HIGH);
  digitalWrite(relay6, HIGH);
  digitalWrite(relay7, HIGH);
  digitalWrite(relay8, HIGH);


  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
