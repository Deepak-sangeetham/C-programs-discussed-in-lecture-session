#include <stdio.h>

int main()
{
    int i, j = 1, k;

    k = (i = j+1) + 1;

    printf("i = %d j = %d k = %d\n", i, j, k);

    return 0;
}