/* Write a program that calculates the number of digits in the number entered by the user. */

#include <stdio.h>

int main()
{
    int digits = 0;
    int n;

    printf("Enter a nonnegative integer : ");
    scanf("%d", &n);

    do
    {
        n /= 10;
        digits++;
    }while (n > 0);

    printf("The number has %d digit(s).\n", digits);

    return 0;
}