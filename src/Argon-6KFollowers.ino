/*
 * Project Argon-6KFollowers
 * Description: Counter up to 6,000 followers
 * Author: @owel.codes
 * Date: Sept 30, 2019
 */
#include "Arduino.h" // this declares that our app/library wants the extended Arduino support

int followers = 0;
char buffer[10];

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(9600);
  Serial.println("Hello Instagram!");
  for (int followers=0; followers < 6001; followers++) {
    sprintf(buffer, "%d", followers);
    Serial.println(buffer);
    Mesh.publish("igfollowers", buffer);
    delay(50);
  }
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // do nothing 
}