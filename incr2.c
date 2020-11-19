#include <stdio.h>

int main()
{
    int i, j;

    i = 2;
    j = i * i++;

    printf("i = %d j = %d \n", i, j);

    return 0;
}