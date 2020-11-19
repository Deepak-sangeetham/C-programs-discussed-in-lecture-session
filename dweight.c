/* Compute the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int length, breadth, height ;
    float volume, weight;

    length = 12;
    breadth = 10;
    height = 8;
    
    volume = length * breadth * height;
    weight = (volume ) / 166;

    printf("Dimesions of cuboid : %d x %d x %d\n", length, breadth, height);
    printf("Volume of cuboid : %.2f\n", volume);
    printf("Weight of the box : %.2f\n", weight);

    return 0;


}