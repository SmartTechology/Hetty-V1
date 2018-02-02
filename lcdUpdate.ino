void lcdUpdate() {
   

  lcd.clear();
  
  switch (mainmenu) {// switch varible name is mainmenu

    case 1: 
    
      while(Serial1.available() > 0){
      lcd.write(Serial.read());

    case 2 :
      lcd.setCursor(0, 0); //set to start
      lcd.print("Temp:"); // message
      lcd.setCursor(0, 1); //set to second row
      lcd.print(showTemp); // shows temp value
      lcd.print((char)223); //special character
      lcd.print("C"); //message
      delay(50);
      Serial.print("case 1 works:"); //message
      Serial.println(showTemp);
      break; //stop case

    case 3 :
      lcd.setCursor(0, 0); //set to start
      lcd.print("Luchtvochtigheid"); //message
      lcd.setCursor(0, 1); //set to second row
      lcd.print(showHumid); //shows humidity
      lcd.print("%");
      delay(50);
      Serial.println("case 3 works"); //message
      break;//stop case

    case 4 :
      lcd.setCursor(0, 0); //set to start
      lcd.print("Binnen:"); //message
      lcd.print(LDR1); //Shows LDR value
      Serial.println(LDR1);
      lcd.setCursor(0, 1);
      lcd.print("Buiten :"); //message
      lcd.print(LDR2); //Shows LDR value
      delay(50);
      Serial.println("case 4 works");// message
      break;//stop case

    case 5:
      lcd.setCursor(0, 0);//set to start
      lcd.print("Temp instellen"); //message
      lcd.setCursor(0, 1); //set to second row
      lcd.print("Licht instellen");//message
      delay(50);
      Serial.println("case 5 works"); //message
      break; //stop case


    case 6:
      lcd.setCursor(0, 0); //set to start
      lcd.print("Licht instellen"); //message
      lcd.setCursor(0, 1); // set to second row
      delay(50);
      lcd.print("Vocht Instellen"); //message
      Serial.println("Case 6 works"); //message
      break; //stop case

    case 7:

      lcd.setCursor(0, 0);
      lcd.print("Vocht Instellen");
      lcd.setCursor(0,1);
      lcd.print("Zonnewering");
      delay(50);
      break;

    case 8:
      lcd.setCursor(0,0);
      lcd.print("Zonnewering");
      lcd.setCursor(0,1);
      lcd.print("Info");
      delay(50);
      break;
    
    case 9:
      lcd.setCursor(0,0);
      lcd.print("Info");
      delay(50);
      break;

    case 10:
      lcd.setCursor(0, 0); // set to start
      lcd.print("Temp instellen"); //message
      lcd.setCursor(0, 1); //set to second row
      lcd.print(EEPROM.read(2)); //message
      lcd.print((char)223); //special character
      lcd.print("C"); //message
      delay(50);
      break; //stop case

    case 11:
      lcd.setCursor(0,0);
      lcd.print("Licht instellen");
      lcd.setCursor(0,1);
      lcd.print("");
      delay(50);
      break;
      

    case 12:
      lcd.setCursor(0, 0);
      lcd.print("IP");
      lcd.setCursor(0, 1);
      lcd.print("Version");
      delay(50);
      break;

    case 13:
      lcd.setCursor(0, 0);
      lcd.print("Version");
      lcd.setCursor(0, 1);
      lcd.print("Back");
      delay(50);
      break;

      case 14:
      lcd.setCursor(0, 0);
      lcd.print("Back");
      delay(50);
      break;

    case 15:
      lcd.setCursor(0, 0);
      lcd.print("Vocht instellen");
      lcd.setCursor(0,1);
      lcd.print(EEPROM.read(3));
      delay(50);
      break;

    case 16:
    lcd.setCursor(0,0);
    lcd.print("Version:");
    lcd.setCursor(0,0);
    lcd.print("1.0 STABLE");
    break;
        
    case 17:
      lcd.setCursor(0,0);
      lcd.print("IP");
      lcd.setCursor(0,1);
      lcd.print("");
      break;

      
       default:
      lcd.setCursor(0, 0);
      lcd.print("Error");
      lcd.setCursor(0, 1);
      lcd.print("Somethings wrong");
      delay(50);
      break;

  }
}
