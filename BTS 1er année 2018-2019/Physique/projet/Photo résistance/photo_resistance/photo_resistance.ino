//definition des pins au variables
 int led1 = 2;
 int led2 = 3;
 int led3 = 4;
 int lightSensorPin = A0;
//


//varibales utilisé dans le code
 int analogValue = 0;
 int valueCal = 0;
//


void setup() 
{
// led en sortie
  pinMode(led1, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
//vitesse pour le moniteur série
  Serial.begin(9600);
  
}

void loop() 
{
// lire la valeur analogique du capteur LDR
  analogValue = analogRead(lightSensorPin);
//

  
// On adapte l'échelle en fonction de nos valeurs mini et maxi (celles aux extrémitées)
  valueCal = map(analogValue,90,900,0,1100); 
//

/*
 * moyenne avec for ou while
 *fin for -> moyenne 
 * moyenne comparée avec seuils...(3)
 * 
 * if(s1<moyenne<s2 &&  ) 
 * 
 */


//
  digitalWrite(led1, LOW);       //
  digitalWrite(led2, LOW);       //    Led sont éteintes de base
  digitalWrite(led3, LOW);       //
//


// conditions pour que les leds s'allument ou s'éteignent
  if(valueCal <250){digitalWrite(led1,LOW);digitalWrite(led2,HIGH);}
  else if(valueCal > 600){digitalWrite(led1,LOW);digitalWrite(led3,HIGH);}
  else{digitalWrite(led1,HIGH);}
//


//afficher la valeur des LUX dans le  moniteur série
  int valeur = analogRead(A0);
  Serial.println(valeur);
  delay(100);
//
}
