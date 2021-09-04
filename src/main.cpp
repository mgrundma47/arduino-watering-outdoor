#include "main.h"

int valve1 = 2;
int valve2 = 3;
int valve3 = 4;
int valve4 = 5;
int valve1Button = 9;
int valve2Button = 10;
int valve3Button = 11;
int valve4Button = 12;
float sensorValue = 0;

// cppcheck-suppress unusedFunction
void setup()
{
    Serial.begin(9600);

    pinMode(valve1, OUTPUT);
    pinMode(valve2, OUTPUT);
    pinMode(valve3, OUTPUT);
    pinMode(valve4, OUTPUT);

    pinMode(valve1Button, INPUT);
    pinMode(valve2Button, INPUT);
    pinMode(valve3Button, INPUT);
    pinMode(valve4Button, INPUT);

    pinMode(LED_BUILTIN, OUTPUT);

    // put your setup code here, to run once:
    char text[] = "arduino";
    Serial.println(text);
}

// cppcheck-suppress unusedFunction
void loop()
{
    // put your main code here, to run repeatedly:
    int val1 = digitalRead(valve1Button);
    int val2 = digitalRead(valve2Button);
    int val3 = digitalRead(valve3Button);
    int val4 = digitalRead(valve4Button);

    //digitalWrite(LED_BUILTIN, LOW);

    if (val1 == LOW)
    {
        digitalWrite(LED_BUILTIN, LOW);
        digitalWrite(valve1, LOW);
    }
    else if (val1 == HIGH)
    {
        digitalWrite(LED_BUILTIN, HIGH);
        digitalWrite(valve1, HIGH);
    }

    if (val2 == LOW)
    {
        digitalWrite(valve2, LOW);
    }
    else if (val2 == HIGH)
    {
        digitalWrite(valve2, HIGH);
    }

    if (val3 == LOW)
    {
        digitalWrite(valve3, LOW);
    }
    else if (val3 == HIGH)
    {
        digitalWrite(valve3, HIGH);
    }

    if (val4 == LOW)
    {
        digitalWrite(valve4, LOW);
    }
    else if (val4 == HIGH)
    {
        digitalWrite(valve4, HIGH);
    }

    for (int i = 0; i <= 100; i++)
    {
        sensorValue = sensorValue + analogRead(A0);
        delay(1);
    }
    sensorValue = sensorValue / 100.0;
    Serial.println(sensorValue);

    delay(1);

    /*
    Serial.println('b');
    digitalWrite(solenoidPin, HIGH); //Switch Solenoid ON
    delay(10000);                    //Wait 1 Second
    digitalWrite(solenoidPin, LOW);  //Switch Solenoid OFF
    delay(10000);                    //Wait 1 Second
  */
    /*
    int buttonState = digitalRead(pushButton);
    // print out the state of the button:
    Serial.println(buttonState);
    delay(1);
    */
}
