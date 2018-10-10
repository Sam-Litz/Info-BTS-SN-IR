//definition des pins au variables

int greenLedPin = 2;
int yellowLedPin = 3;
int redLedPin = 4;

int lightSensorPin = A0;
int analogValue = 0;



void setup() 
{
  // led en sortie
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin,OUTPUT);
  pinMode(redLedPin,OUTPUT);

  Serial.begin(9600);
  
}

void loop() 
{
  analogValue = analogRead(lightSensorPin);

// valeurs à revoir en effectuant des tests avec différentes lumières
  
     if(analogValue < 50) // en fonction des LUX (valeur entre 0 et 1000? )
     {            
        digitalWrite(redLedPin, HIGH);
     }
     
        else if(analogValue >= 50 && analogValue <= 100)
             {
                digitalWrite(yellowLedPin, HIGH);
             }
             
             else
             {
                digitalWrite(greenLedPin, HIGH);
             }
             
             // etteindre les leds après 200 ms
  delay(200);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(redLedPin, LOW);



  //afficher la valeur des LUX


  int valeur = analogRead(A0);
  Serial.println(valeur);
  delay(250);

  
}
