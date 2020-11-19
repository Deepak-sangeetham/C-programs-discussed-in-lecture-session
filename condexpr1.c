#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N;
    int flag;

    printf("Enter N :");
    scanf("%d", &N);

    flag = N >=0 ? printf("N is a +ve number\n") : printf("N is a Negative number\n");

    printf("flag = %d\n", flag);
/*   if (flag)
        printf("N is a positive number\n");
    else
        printf("N is a Negative number\n");
*/
    return 0;
}