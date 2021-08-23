#include "Arduino.h"

void setup()
{
    Serial.begin(9600);

    // put your setup code here, to run once:
    Serial.println('a');
}

void loop()
{
    // put your main code here, to run repeatedly:
    Serial.println('b');
}
