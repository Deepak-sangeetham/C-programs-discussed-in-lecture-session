#include <stdio.h>

int main()
{
    int length, breadth, height;
    int volume;

    // the input values must be integers

    printf("Enter the length:");
    scanf("%d", &length);
    printf("Enetr the breadth:");
    scanf("%d", &breadth);
    printf("Enter the height:");
    scanf("%d", &height);

    volume = length * breadth * height;

    printf("cube dimensions: %d x %d x %d\n", length, breadth, height);
    printf("volume: %d \n", volume);

    return 0;
}