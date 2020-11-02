#include<ESP8266WiFi.h>
#include <Arduino.h>
#include <string.h>
#include <stdlib.h>

const char* ssid="KOST-KIKI";//name of wifi
const char* password="tubagus12";//wifi password
const char* host="192.168.0.117";//LOCAL IPv4 ADDRESS...ON CMD WINDOW TYPE ipconfig/all
const uint16_t port=80;//PORT OF THE LOCAL SERVER
int stat=1;
char* data[5];
void setup() {

 Serial.begin(9600);
 Serial.println("STARTING CONNECTION TO WIFI");
 //WiFi.mode(WIFI_STA);
 WiFiServer server(80);
 WiFi.begin(ssid,password);
 while(WiFi.status()!=WL_CONNECTED)//waiting for device to be connected to the network
 {Serial.print('.');
 delay(500);
}
Serial.println("CONNECTED TO WIFI");
Serial.print("IP:");
Serial.println(WiFi.localIP());

//setup array
for (int i=0; i<=4; i++){
  data[i] = (char*)malloc(3*sizeof(char));
}
}

void loop(){
  
  Serial.print("Connecting to: ");
  Serial.print(host);
  Serial.print(":");
  Serial.println(port);
  WiFiClient client;
  if(!client.connect(host,port))//IF THIS OCCURS MAKE THEN FIREWALL IS STOPPING THE CONNECTION OR THE IP ADDRESS/PORT OF THE SERVER IS INCORRECT.
  {Serial.println("CONNECTION FAILED");
  delay(4000);
  return;
  }
  else{
   Serial.println("CONNECTED TO THE SERVER");
   client.print(String("GET ")+"/AGV/main.php?Status="+stat+" HTTP/1.1\r\n"+"Host:"+host+"\r\n"+"Connection:close\r\n\r\n");
    unsigned long timeout=millis();
    while(client.available()==0)
    { 
      //close the connection if it has been connected for more than 5 seconds
      if(millis()-timeout>5000){
      Serial.println(">>> Client Timeout !");
      client.stop();
      delay(5000);
      return;
      }}
       Serial.println("receiving from remote server");
       
//Start reading the response from the server
  while (client.available()) {
    //char ch = static_cast<char>(client.read());
    //Serial.print(ch);
  int i =0;
  String line = client.readStringUntil('\n');
  
str.toCharArray(data, str.length(line));
  //data[i] = atoi(temp_string.c_str(line));
    //Serial.println(data[i]);
    //i++;
  }
  // Close the connection
  Serial.println();
  Serial.println("closing connection");
  client.stop();
  delay(6000);
  }
  }
