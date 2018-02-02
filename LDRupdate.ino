void ldrUpdate() {
  unsigned long LDR1currentMillis = millis();
  unsigned long LDR2currentMillis = millis();
  const long LDR1interval = 3000;
  const long LDR2interval = 3000;
 

  if (millis() - LDR1previousMillis >= 3000) {
   
    LDR1 = analogRead(pinLDR1);
    Serial.print("LDR1:");
    Serial.println(LDR1);
    LDR1previousMillis = millis();


    if (oldLDR1 != LDR1) {
      oldLDR1 = LDR1;
      lcdUpdate();
    }


  }

  if (millis() - LDR2previousMillis >= 3000) {

    LDR2 = analogRead(pinLDR2);
    Serial.print("LDR2:");
    Serial.println(LDR2);
    LDR2previousMillis = millis();


    if (oldLDR2 != LDR2) {
      oldLDR2 = LDR2;
      lcdUpdate();
    }


  }
}
