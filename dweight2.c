/* Compute the dimensional weight of the box from input provided by the user when no.of inches per pack is already defined.*/

#include <stdio.h>

#define INCHESPERPACK 160

int main()
{
    int length, breadth, height;
    float volume,weight;

    printf("Enter the length : ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    printf("Enter the height:");
    scanf("%d", &height);

    volume = length * breadth * height ;
    weight = volume / INCHESPERPACK ;

    printf("Volume of the box: %.2f\n", volume);
    printf("Weight of the box: %.2f\n", weight);

    
}