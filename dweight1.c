/* Compute the dimensional weight of the box from input provided by the user.*/

#include <stdio.h>

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
    weight = volume / 166 ;

    printf("Volume of the box: %.2f\n", volume);
    printf("Weight of the box: %.2f\n", weight);

    
}