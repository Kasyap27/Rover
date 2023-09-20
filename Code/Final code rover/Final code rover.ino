
#include<SoftwareSerial.h>


char msg;
SoftwareSerial bt(0,1); /* (Rx,Tx) */	

#define m1_a 6
#define m1_b 5
#define m2_a 4
#define m2_b 7
#define m3_a 2
#define m3_b 3
#define m4_a 13
#define m4_b 10
#define m5_a 8
#define m5_b 9
#define m6_a 11
#define m6_b 12



int s = 100; // rover speed



void setup() {

  
  pinMode(m1_a, OUTPUT);
  pinMode(m1_b, OUTPUT);
  pinMode(m2_a, OUTPUT);
  pinMode(m2_b, OUTPUT);
  pinMode(m3_a, OUTPUT);
  pinMode(m3_b, OUTPUT);
  pinMode(m4_a, OUTPUT);
  pinMode(m4_b, OUTPUT);
  pinMode(m5_a, OUTPUT);
  pinMode(m5_b, OUTPUT);
  pinMode(m6_a, OUTPUT);
  pinMode(m6_b, OUTPUT);

  Serial.begin(9600);
  bt.begin(9600);	/* Define baud rate for software serial communication */
 

  // while (!Serial);
  // Serial.println(" Receiver");



}

void loop() {

  ////////////////////////////// RECIEVER SECTION /////////////////////////////////////////////////////////////////////////////
  // try to parse packet
  //  if (bt.available())	/* If data is available on serial port */
  //   {
  //     msg=bt.read();
      
  //    if(msg=='F')
  //    {
  //     analogWrite(m1_a, s);   // Outer wheels running at speed1 - max speed
  //     digitalWrite(m1_b, LOW);
  //     // Motor Wheel 2 - Left Middle
  //     analogWrite(m2_a, s);
  //     digitalWrite(m2_b, LOW);
  //     // Motor Wheel 3 - Left Back
  //     analogWrite(m3_a, s);
  //     digitalWrite(m3_b, LOW);
  //     // right side motors move in opposite direction
  //     // Motor Wheel 4 - Right Front
  //     digitalWrite(m4_a, LOW);
  //     analogWrite(m4_b, s); // Inner front wheel running at speed2 - lower speed
  //     // Motor Wheel 5 - Right Middle
  //     digitalWrite(m5_a, LOW);
  //     analogWrite(m5_b, s); // Inner middle wheel running at speed3 - lowest speed
  //     // Motor Wheel 6 - Right Back
  //     digitalWrite(m6_a, LOW);
  //     analogWrite(m6_b, s); // Inner back wheel running at speed2 - lower speed
  //     Serial.println("going front");
  //    }
  //    if(msg=='B')
  //    {
  //     analogWrite(m1_a, LOW);   // Outer wheels running at speed1 - max speed
  //     digitalWrite(m1_b, s);
  //     // Motor Wheel 2 - Left Middle
  //     analogWrite(m2_a, LOW);
  //     digitalWrite(m2_b, s);
  //     // Motor Wheel 3 - Left Back
  //     analogWrite(m3_a, LOW);
  //     digitalWrite(m3_b, s);
  //     // right side motors move in opposite direction
  //     // Motor Wheel 4 - Right Front
  //     digitalWrite(m4_a, s);
  //     analogWrite(m4_b, LOW); // Inner front wheel running at speed2 - lower speed
  //     // Motor Wheel 5 - Right Middle
  //     digitalWrite(m5_a, s);
  //     analogWrite(m5_b, LOW); // Inner middle wheel running at speed3 - lowest speed
  //     // Motor Wheel 6 - Right Back
  //     digitalWrite(m6_a, s);
  //     analogWrite(m6_b, LOW); // Inner back wheel running at speed2 - lower speed
  //     Serial.println("going back");
  //    }
  //  }
  // else 
  //   Serial.println("waiting for message");
analogWrite(m1_a,100);
analogWrite(m1_b,0);    
}
