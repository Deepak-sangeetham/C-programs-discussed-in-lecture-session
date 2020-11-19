/* Gives a maximum number from a series of numbers */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n, max, retval ;

    printf("This program finds  a maximum number from a series of numbers we entered.\n");
    printf("Enter integers(0 to terminate) : ");
    retval = scanf("%d", &n);
    max = n;

    while (retval == 1)
    {
       if (n > max)
       max = n;
       retval = scanf("%d", &n);
    }
    if (max != 0)

        printf("\nThe max is : %d\n", max);
    
    else
    {
        printf("The list is empty.\n");
    }
    

    return 0;
}