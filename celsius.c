// convert a fahrenheit temperature to celsius temperature.
// Name : celsius.c
// Purpose : conversion of fahrenheit temperature to celsius temperature.

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main() //Beginning of main function.
{
    float fahrenheit, celsius;

    printf("Enter fahrenheit temperature : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("celsius temperature : %.1f\n", celsius);

    return 0;
}