int LED=5; 
int SENSOR=2;// Capteur de collision
int RED=3;
int motor=9;
int button=7;
int membutton;
void setup()
{

    pins_init();
Serial.begin(9600);
}

void loop()
{
  membutton = digitalRead(button);
 if(isTriggered())
    {
        turnOnLED();
        delay(1000);
    }
    else turnOffLED();
}

void pins_init()
{   pinMode(button,INPUT);
    pinMode(motor,OUTPUT);
    pinMode(LED,OUTPUT);
    turnOffLED();
    pinMode(SENSOR,INPUT);
    pinMode(RED,INPUT);
  }

boolean isTriggered()
{
    if(!digitalRead(SENSOR))
    {
        delay(100);
        if(!digitalRead(SENSOR))
        return true;//the collision sensor triggers
        Serial.println("toto");
    }
    return false;
}

void turnOnLED()
{
    digitalWrite(LED,HIGH);//the LED is on
    analogWrite(motor,255);
    delay(5000);
    if (digitalRead(button==LOW))
    {
      digitalWrite(RED,HIGH);
  
      }

}

void turnOffLED()
{
  if (membutton == HIGH)
  { digitalWrite(RED,LOW);
}
    digitalWrite(LED,LOW);//the LED is off
    analogWrite(motor,0);
   }

