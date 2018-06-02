// Damit es richtig funktioniert sollten es PWM Pins sein
const int RGB_ROT = 9;
const int RGB_GRUEN = 10;
const int RGB_BLAU = 11;

void setup()
{
  // Alle LED Pins auf Output
  pinMode(RGB_ROT, OUTPUT);
  pinMode(RGB_GRUEN, OUTPUT);
  pinMode(RGB_BLAU, OUTPUT);
}

void loop()
{
  int i;
  //Rot
  for(i = 0; i < 256; i++)
  {
    setColor(i,0,0);
    delay(5);
  }

  for(i = 256; i >= 0; i--)
  {
    setColor(i,0,0);
    delay(5);
  }

  // Grün
  for(i = 0; i < 256; i++)
  {
    setColor(0,i,0);
    delay(5);
  }

  for(i = 256; i >= 0; i--)
  {
    setColor(0,i,0);
    delay(5);
  }

  // Blau
  for(i = 0; i < 256; i++)
  {
    setColor(0,0,i);
    delay(5);
  }

  for(i = 256; i >= 0; i--)
  {
    setColor(0,0,i);
    delay(5);
  }
}

// Externe funktion um RGB auf bestimmten Wert zu setzen
void setColor(int rot, int gruen, int blau)
{
  analogWrite(RGB_ROT, rot);
  analogWrite(RGB_GRUEN, gruen);
  analogWrite(RGB_BLAU, blau);
}

