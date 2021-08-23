#include "main.h"

// cppcheck-suppress unusedFunction
void setup()
{
    Serial.begin(9600);

    // put your setup code here, to run once:
    char text[] = "arduino";
    Serial.println(text);
}

// cppcheck-suppress unusedFunction
void loop()
{
    // put your main code here, to run repeatedly:
    Serial.println('b');
}
