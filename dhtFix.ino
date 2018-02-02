void dhtFix(){
unsigned long currentMillis = millis(); 
unsigned long currentMillis2 = millis();

  if (currentMillis - previousMillis >= interval) {
    chk = DHT.read11(DHT11_pin);
    showTemp = DHT.temperature;
    Serial.print("temp1:");
    Serial.println(showTemp);
    previousMillis = currentMillis;

    
    if (oldShowTemp != showTemp) {
      oldShowTemp = showTemp;
      lcdUpdate();
    } 

    
  }

  
  if (currentMillis2 - previousMillis2 >= interval) {
    
    showHumid = DHT.humidity;
    Serial.print("humid1:");
    Serial.println(showHumid);
    previousMillis2 = currentMillis2;

    
    if (oldShowHumid != showHumid) {
      oldShowHumid = showHumid;
      lcdUpdate();
    } 

    
  }
}
