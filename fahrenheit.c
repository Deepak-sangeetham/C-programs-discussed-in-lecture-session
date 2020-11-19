/* Convert given celsius temperature into fahrenheit temperature. */

#include <stdio.h>

#define FREEZING_PT 32
#define SCALE_FACTOR (9.0f / 5.0f)

int main()
{
    float celsius, fahrenheit;

    printf("Enter the celsius temperature: ");
    scanf("%f", &celsius);

    fahrenheit = FREEZING_PT + (SCALE_FACTOR * celsius);

    printf("Fahrenheit temperature = %.1f\n", fahrenheit);

    return 0;
}