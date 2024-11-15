//var globales


/* Fonction setup() */
void setup() {
  
  /* Toutes les broches en sorties */

  //afficheur gauche
  pinMode(31, OUTPUT);
  digitalWrite(31, LOW);
  pinMode(23, OUTPUT);
  digitalWrite(23, LOW);
  pinMode(29, OUTPUT);
  digitalWrite(29, LOW);
  pinMode(25, OUTPUT);
  digitalWrite(25, LOW);
  pinMode(39, OUTPUT);
  digitalWrite(39, LOW);
  pinMode(35, OUTPUT);
  digitalWrite(35, LOW);
  pinMode(27, OUTPUT);
  digitalWrite(27, LOW);
  pinMode(37, OUTPUT);
  digitalWrite(37, LOW);

//afficheur central
  pinMode(34, OUTPUT);
  digitalWrite(34, LOW);
  pinMode(22, OUTPUT);
  digitalWrite(22, LOW);
  pinMode(32, OUTPUT);
  digitalWrite(32, LOW);
  pinMode(24, OUTPUT);
  digitalWrite(24, LOW);
  pinMode(38, OUTPUT);
  digitalWrite(38, LOW);
  pinMode(30, OUTPUT);
  digitalWrite(30, LOW);
  pinMode(28, OUTPUT);
  digitalWrite(28, LOW);
  pinMode(36, OUTPUT);
  digitalWrite(36, LOW);

//afficheur droit
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
  pinMode(6, OUTPUT);
  digitalWrite(6, LOW);
  pinMode(12, OUTPUT);
  digitalWrite(12, LOW);
  pinMode(10, OUTPUT);
  digitalWrite(10, LOW);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

  // start serial port at 9600 bps:
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only

}


/** Fonction loop() */
void loop() {


}



// BOUCLES CHIFFRE

void chiffre0(int afficheur){
  if(afficheur==1){
    digitalWrite(31, HIGH);
    digitalWrite(29, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(27, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(23, HIGH);
  } else if (afficheur==2){
    digitalWrite(34, HIGH);
    digitalWrite(32, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(28, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(22, HIGH);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
}



void chiffre1(int afficheur){
  if(afficheur==1){
    digitalWrite(29, HIGH);
    digitalWrite(35, HIGH);
  } else if (afficheur==2){
    digitalWrite(32, HIGH);
    digitalWrite(30, HIGH);
  } else {
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
  }
}


void chiffre2(int afficheur){
  if(afficheur==1){
    digitalWrite(31, HIGH);
    digitalWrite(29, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(27, HIGH);
  } else if (afficheur==2){
    digitalWrite(34, HIGH);
    digitalWrite(32, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(28, HIGH);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
  }
}


void chiffre3(int afficheur){
  if(afficheur==1){
    digitalWrite(31, HIGH);
    digitalWrite(29, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(27, HIGH);
  } else if (afficheur==2){
    digitalWrite(34, HIGH);
    digitalWrite(32, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(28, HIGH);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
  }
}


void chiffre4(int afficheur){
  if(afficheur==1){
    digitalWrite(23, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(35, HIGH);
  } else if (afficheur==2){
    digitalWrite(22, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(30, HIGH);
  } else {
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
  }
}


void chiffre5(int afficheur){
  if(afficheur==1){
    digitalWrite(31, HIGH);
    digitalWrite(23, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(27, HIGH);
  } else if (afficheur==2){
    digitalWrite(34, HIGH);
    digitalWrite(22, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(28, HIGH);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
  }
}


void chiffre6(int afficheur){
  if(afficheur==1){
    digitalWrite(31, HIGH);
    digitalWrite(23, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(27, HIGH);
    digitalWrite(39, HIGH);
  } else if (afficheur==2){
    digitalWrite(34, HIGH);
    digitalWrite(22, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(28, HIGH);
    digitalWrite(38, HIGH);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
}


void chiffre7(int afficheur){
  if(afficheur==1){
    digitalWrite(31, HIGH);
    digitalWrite(29, HIGH);
    digitalWrite(35, HIGH);
  } else if (afficheur==2){
    digitalWrite(34, HIGH);
    digitalWrite(32, HIGH);
    digitalWrite(30, HIGH);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
  }
}


void chiffre8(int afficheur){
  if(afficheur==1){
    digitalWrite(31, HIGH);
    digitalWrite(23, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(27, HIGH);
    digitalWrite(39, HIGH);
    digitalWrite(29, HIGH);
  } else if (afficheur==2){
    digitalWrite(34, HIGH);
    digitalWrite(22, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(28, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(32, HIGH);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
  }
}


void chiffre9(int afficheur){
  if(afficheur==1){
    digitalWrite(31, HIGH);
    digitalWrite(23, HIGH);
    digitalWrite(25, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(27, HIGH);
    digitalWrite(29, HIGH);
  } else if (afficheur==2){
    digitalWrite(34, HIGH);
    digitalWrite(22, HIGH);
    digitalWrite(24, HIGH);
    digitalWrite(30, HIGH);
    digitalWrite(28, HIGH);
    digitalWrite(32, HIGH);
  } else {
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(6, HIGH);
  }
}


// FONCTION PRINCIPALE

void mainFunction(){

  if (Serial.available() > 0) {
    int donneesBrutes = Serial.read();
    String donnees = String(donneesBrutes);
    while (donnees.length<3){
      donnees="0"+donnees;
    }
    for(int compteur=0; compteur<3; compteur++){
      if(donnees[compteur]==0){
        chiffre0(compteur)
      } else if()//--------------------------------------------------------------------------------------

    }


  }
}


