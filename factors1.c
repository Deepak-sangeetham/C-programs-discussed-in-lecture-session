#include <stdio.h>

int main()
{
    int N;

    printf("Enter N : ");
    scanf("%d", &N);

    if (N % 2 == 0 && N % 3 == 0)
        printf("N has factors 2 and 3\n");
    
    if (N % 2 == 0 && ! (N % 3 ==0))
        printf("N has factor 2 but not factor 3\n");
    
    if ( !(N % 2 == 0) && N % 3 == 0 )
        printf("N has factor 3 but not factor 2\n");

    if (!(N % 2 == 0) && !( N % 3 == 0))
        printf("N has neither factors 2 and 3\n");


    return 0;
} 