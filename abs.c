#include <stdio.h>

int main()
{
    int x, absx;

    printf("Emter x:");
    scanf("%d", &x);

    if (x > 0)
        absx = x;

    else
        absx = -x;

    printf("|x| = %d\n", absx);

    return 0;

}