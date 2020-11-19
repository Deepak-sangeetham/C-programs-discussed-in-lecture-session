#include <stdio.h>

#define N 10

int main()
{
    int A[N];

    printf("Enter %d numbers : ", N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &A[i]);      
    }
    int sum = 0;
    for (int i = 0; i < N; ++i)
    {
        sum += A[i];
    }

    printf("\nSum of series of numbers : %d\n", sum);

    int max = A[0];
    for (int i = 0; i < N; ++i)
    {
        if (A[i] > max)
            max = A[i];
    }

    printf("Maximun element of the series : %d\n", max);

    return 0;
}