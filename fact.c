#include <stdio.h>

int fact(int n)

{
    int factorial;

    if(n == 1)
        return 1;

    factorial = n * fact(n-1);

    return factorial;
}

main()
{
    printf("6! = %d\n", fact(6));
}