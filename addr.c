#include <stdio.h>

int main()
{
    int i, j = -1;
    
    i = 1000;
    printf(" The value of i is : %d\n", i);

    printf("memory adress of i is : %p\n",&i);


    i = j;
    printf(" The value of i is : %d\n", i);

    printf("memory adress of i is : %p\n",&i);
    return 0;
}