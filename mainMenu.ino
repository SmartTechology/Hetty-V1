void mainMenu() {
  // Change to 2
  if (mainmenu == 1 && downState == HIGH) {
    mainmenu = 2;
    delay(50);
    Serial.println(" Changed to 2");
    lcdUpdate();
    downState = LOW;
  }

  // change to 3
  if (mainmenu == 2 && downState == HIGH) {
    mainmenu = 3;
    delay(50);
    lcdUpdate();
    downState = LOW;
    Serial.println(" Changed to 3");
  }

  // change to 4
  if (mainmenu == 3 && downState == HIGH) {
    mainmenu = 4;
    delay(50);
    lcdUpdate();
    downState = LOW;
    Serial.println("Changed to 4");

  }
  //change to 5
  if (mainmenu == 4 && downState == HIGH) {
    mainmenu = 5;
    delay(50);
    lcdUpdate();
    downState = LOW;
    Serial.println("Changed to 5");
  }

  //change to 6
  if (mainmenu == 5 && downState == HIGH) {
    mainmenu = 6;
    delay(50);
    lcdUpdate();
    downState = LOW;
    Serial.println("Changed to 6");
  }
  // change to 7
  if (mainmenu == 6 && downState == HIGH) {
    mainmenu = 7;
    delay(50);
    lcdUpdate();
    downState = LOW;
    Serial.println("Changed to 7");
  }

  //change to 8

  if (mainmenu == 7 && downState == HIGH) {
    mainmenu = 8;
    delay(50);
    lcdUpdate();
    downState = LOW;
    Serial.println("changed to 8");
  }

  if (mainmenu == 8 && downState == HIGH) {
    mainmenu = 9;
    delay(50);
    lcdUpdate();
    downState = LOW;
    Serial.println("changed to 8");
  }



  if (mainmenu == 11 && downState ==  HIGH) {
    mainmenu = 12;
    lcdUpdate();
    downState = LOW;
    Serial.println(" Changed to 12");
  }

  if (mainmenu == 12 && downState ==  HIGH) {
    mainmenu = 13;
    lcdUpdate();
    downState = LOW;
    Serial.println(" Changed to 12");
  }

  if (mainmenu == 13 && downState ==  HIGH) {
    mainmenu = 14;
    lcdUpdate();
    downState = LOW;
    Serial.println(" Changed to 12");
  }




//from 2 to 1
if (mainmenu == 2 && upState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  upState = LOW;
  Serial.println(" Back to 1");
}

//from 3 to 2
if (mainmenu == 3 && upState == HIGH) {
  mainmenu = 2;
  lcdUpdate();
  upState = LOW;
  Serial.println(" Back to 2");
}

//from 4 to 3
if (mainmenu == 4 && upState == HIGH) {
  mainmenu = 3;
  lcdUpdate();
  upState = LOW;
  Serial.println(" Back to 3");
}

//from 5 to 4
if (mainmenu == 5 && upState == HIGH) {
  mainmenu = 4;
  lcdUpdate();
  upState = LOW;
  Serial.println(" Back to 4");
}
//from 6 to 5
if (mainmenu == 6 && upState == HIGH) {
  mainmenu = 5;
  lcdUpdate();
  upState = LOW;
  Serial.println(" Back to 5");
}
// 7 to 6
if (mainmenu == 7 && upState == HIGH) {
  mainmenu = 6;
  lcdUpdate();
  upState = LOW;
  Serial.println( "Back to 6");
  
}
// Change back to 8
if (mainmenu == 8 && upState == HIGH) {
  mainmenu = 7;
  lcdUpdate();
  Serial.println(" Changed to 8");
  upState = LOW;

}

// Change back to 8
if (mainmenu == 9 && upState == HIGH) {
  mainmenu = 8;
  lcdUpdate();
  Serial.println(" Changed to 8");
  upState = LOW;

}





// back to 12
if (mainmenu == 13 && upState == HIGH) {
  mainmenu = 12;
  lcdUpdate();
  Serial.println(" Changed to 12");
  upState = LOW;
}


// back to 13
if (mainmenu == 14 && upState == HIGH) {
  mainmenu = 13;
  lcdUpdate();
  Serial.println(" Changed to 13");
  upState = LOW;
}







//from 2 --> home
if (mainmenu == 2 && homeState == HIGH) {
  mainmenu = 1;
  delay(50);
  lcdUpdate();
  homeState = LOW;
  Serial.println(" Back to home");

}



//from 3 --> home
if (mainmenu == 3 && homeState == HIGH) {
  mainmenu = 1;
  delay(50);
  lcdUpdate();
  homeState = LOW;
  Serial.println(" Back to home");


}

//from 4 --> home
if (mainmenu == 4 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  homeState = LOW;
  Serial.println(" Back to home");
}
//from 5 --> home
if (mainmenu == 5 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  homeState = LOW;
  Serial.println(" Back to home");

}
//from 6 --> home
if (mainmenu == 6 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  homeState = LOW;
  Serial.println(" Back to home");
}
//from 7 --> home
if (mainmenu == 7 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}
//from 8 --> home
if (mainmenu == 8 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}
//from 9 --> home
if (mainmenu == 9 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}
//from 10 --> home
if (mainmenu == 10 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}
//from 11 --> home
if (mainmenu == 11 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}
//from 12 --> home
if (mainmenu == 12 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}
//from 13 --> home
if (mainmenu == 13 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}
//from 14 --> home
if (mainmenu == 14 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}

//from 15 --> home
if (mainmenu == 15 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}

//from 16 --> home
if (mainmenu == 16 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}

//from 17 --> home
if (mainmenu == 17 && homeState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println(" Back home");
  homeState = LOW;
}


//turn to ajust light
if (mainmenu == 6 && enterState == HIGH) {
  mainmenu = 11;
  lcdUpdate();
  enterState = LOW;
  Serial.println(" Changed to 8");
}

if (mainmenu == 7 && enterState == HIGH) {
  mainmenu = 15;
  lcdUpdate();
  enterState = LOW;
  Serial.println("Changed to 15");
}

//change config temp -1
if (mainmenu == 10 && downState == HIGH) {
  configTemp = configTemp - 1;
  lcdUpdate();
  delay(50);
  Serial.println(" Changed temp");
  downState = LOW;


}
//change config temp +1
if (mainmenu == 10 && upState == HIGH) {
  configTemp = configTemp + 1;
  lcdUpdate();
  delay(50);
  Serial.println(" Changes temp");
  upState = LOW;

}



if (mainmenu == 5 && enterState == HIGH) {
  mainmenu = 10;
  lcdUpdate();
  delay(50);
  Serial.print(" Changed to temp config");
}

//change config temp -1
if (mainmenu == 15 && downState == HIGH) {
  configHumid = configHumid - 1;
  lcdUpdate();
  delay(50);
  Serial.println(" Changed humidity");
  downState = LOW;


}
//change config temp +1
if (mainmenu == 15 && upState == HIGH) {
  configHumid = configHumid + 1;
  lcdUpdate();
  delay(50);
  Serial.println(" Changes humidity");
  upState = LOW;

}


if (mainmenu == 8 && enterState == HIGH){
  digitalWrite(servoLED, HIGH);
  delay(10000);
  digitalWrite(servoLED, LOW);
  
}

if (mainmenu == 14 && enterState == HIGH) {
  mainmenu = 1;
  lcdUpdate();
  Serial.println("Back button pressed");
}
if  (mainmenu == 12 && enterState == HIGH){
  mainmenu = 17;
  lcdUpdate();
  Serial.println("Changed to 17"); 
}

if (mainmenu == 13 && enterState == HIGH){
  mainmenu = 16;
  lcdUpdate();
  Serial.println("Changed to 16");
    
}

if (mainmenu == 9 && enterState == HIGH){
  mainmenu = 12;
  lcdUpdate();
  Serial.println("Changed to 12");
}
}







