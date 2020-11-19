// Compute the volume,surface area of a cuboid of given dimensions of 5 x 4 x 3

#include <stdio.h>

int main()
{
    int length,breadth,height;
    int volume;

    length = 5;
    breadth = 4;
    height = 3;

    volume = length * breadth * height;

    printf("cuboid dimensions: %d x %d x %d\n", length,breadth,height);
    printf("volume of the cuboid: %d \n", volume);

    int surfacearea;

    surfacearea = 2*( length*breadth + breadth*height + height*length );
    
    printf("surface area of the cuboid : %d\n", surfacearea);

    return 0;

}

     

     


