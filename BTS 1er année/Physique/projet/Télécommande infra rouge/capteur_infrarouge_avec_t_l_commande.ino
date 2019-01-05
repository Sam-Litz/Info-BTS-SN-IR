#include <IRremote.h> //bibliotèque à installer

// pour l'infrarouge
 int PIN_RECEPTEUR = 5; // changer le nombre pour le bon pin
 IRrecv recepteurInfraRouge(PIN_RECEPTEUR);
 decode_results messageRecu;

// leds 1, 2
 int led1 = 2;
 int led2 = 3;

 String up,down; // 

void setup()
{
  Serial.begin(9600);
  recepteurInfraRouge.enableIRIn(); // Initialise le recepteur

  // led en sortie
  pinMode(led1, OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {


  if (recepteurInfraRouge.decode(&messageRecu)) 
  {
    if (messageRecu.value == 0x458)
    {
      Serial.println("Touche Up");
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
    }

        if (messageRecu.value == 0x459)
    {
      Serial.println("Touche Down");
      digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
    }

    
    Serial.println(messageRecu.value, HEX); // afficher la valeur reçus
    recepteurInfraRouge.resume(); // pour recevoir de nouveaux messages
  }


/*
bas 
CA70982
4CB0FADF
8945EC2E
49EAB13A
964BB613
BDBD46BF
1688514E
8CA513D2
390D3FDF
9BA01499
35DB8801
6D9E40F
2112B2DF
186E9E06
9AE947B6
67136818
2B7F220C
ED38F0B
A8F22F23
459
10459



haut
FCABFFBF
F19EF067
81CF86C2
5EEA305A
A986F4B3
202F1329
F2EAE9C5
6ADBBDCE
FCABFFBF
D32A1CC6
C40BD815
4CB0FADD
577311CD
CB77C24E
C3EB00CA
296C0280
F6490DD0
24ADD8BC
35FF7BDA
458
10458
*/

}
