// Test Grove - Collision Sensor
int LED=5; //the onboard LED of Arduino or Seeeduino
int COLLISION_SENSOR=2;//collision sensor is connected with D2 of Arduino
int RED=3;
int motor=9;
int button=7;
void setup()
{
    pins_init();
Serial.begin(9600);
}

void loop()
{
 if(isTriggered())
    {
        turnOnLED();
        delay(1000);
    }
    else turnOffLED();
}

void pins_init()
{
    pinMode(LED,OUTPUT);
    turnOffLED();
    pinMode(COLLISION_SENSOR,INPUT);
}

boolean isTriggered()
{
    if(!digitalRead(COLLISION_SENSOR))
    {
        delay(100);
        if(!digitalRead(COLLISION_SENSOR))
        return true;//the collision sensor triggers
        Serial.println("toto");
    }
    return false;
}

void turnOnLED()
{
    digitalWrite(LED,HIGH);//the LED is on
    delay(5000);
}

void turnOffLED()
{
    digitalWrite(LED,LOW);//the LED is off
   }

