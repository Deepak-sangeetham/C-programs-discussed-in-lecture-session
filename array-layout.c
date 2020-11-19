#include <stdio.h>

#define N 10

int main()
{
    int A[N];

    for (int i = 0; i < N; ++i)
    {
        printf("Address of A[%d]: %p -- %lu\n", i, &A[i], (long unsigned) &A[i]);

    
    }

    return 0;

}
