/* 
    Module SX1278 // Arduino UNO/NANO    
    GND         ->   GND
    Vcc         ->   3.3V
    MISO        ->   D12
    MOSI        ->   D11     
    SLCK        ->   D13
    Nss         ->   D10
    Di00        ->   D2
    RST         ->   D9      
 */

#include <SPI.h>
#include <LoRa.h>
#include <string.h>

#define LORA_SS 10
#define LORA_RST 9
#define LORA_DIO0 2
void setup() {
  pinMode(LORA_SS, OUTPUT);
digitalWrite(LORA_SS, HIGH);

LoRa.setPins(LORA_SS, LORA_RST, LORA_DIO0);
  Serial.begin(9600);
  pinMode(A3,INPUT);
  pinMode(A2,INPUT);
  while (!Serial);
  Serial.println("LoRa Sender");

  if (!LoRa.begin(433E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {

  //reading pot values
  int ch0 = 300; //analogRead(A0);
  int ch1 = 51; //analogRead(A1);
  int ch2 = 200; //analogRead(A2);
  delay(500);
  // send packet
  LoRa.beginPacket();
  Serial.println("sending value");  
  LoRa.print(ch0);
  LoRa.print(" ");
  LoRa.print(ch1);
  LoRa.print(" ");
  LoRa.print(ch2);
  LoRa.endPacket();

}

void tostring(char str[], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len]='\0';
}
