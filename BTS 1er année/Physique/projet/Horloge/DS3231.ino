  /*

  Petit programme pour afficher l'heure avec l'horloge
  
  pins: SCL et SDA du DS3231 sur SCL et SDA sur l'arduino
  
  */
  
  
  #include <DS3231.h> // bibliothèque

  DS3231  rtc(SDA, SCL);
  
  void setup() 
{
    Serial.begin(115200);
    rtc.begin();

    //definir la date
    
  rtc.setDOW(WEDNESDAY);
  rtc.setTime(12, 0, 0);
  rtc.setDate(1, 1, 2018);  

}

void loop() 
{
  // Afficher le jour
  Serial.print(rtc.getDOWStr());
  // mettre un espace
  Serial.print(" ");
  
  // Afficher la date
  Serial.print(rtc.getDateStr());
  // séparation
  Serial.print(" -- ");
  // afficher l'heure
  Serial.println(rtc.getTimeStr());
  
  // toutes les secondes
  delay (1000);

  // ouvrir le moniteur série pour voir l'heure défiler (ctrl+ MAJ + M)

}
