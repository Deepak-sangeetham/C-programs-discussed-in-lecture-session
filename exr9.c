#include <stdio.h>

void pb(int n){

    if(n != 0){
        pb(n/2);
        putchar('0' + n % 2);
    }
}


int main(void)
{
    int n;

    printf("Enter a number which you want to convert into binary :");
    scanf("%d", &n);

    pb(n);

    printf("\n");
    return 0;
    
}