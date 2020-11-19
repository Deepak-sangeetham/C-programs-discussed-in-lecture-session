#include <stdio.h>

int numarray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

main()
{
    int A[100];
    int sum, i;

    for(int i = 0;i < 10; i++)
    {
        sum = sum + numarray[i];
    }
}