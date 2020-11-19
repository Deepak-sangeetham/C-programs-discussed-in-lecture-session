#include <stdio.h>

#define BASE 3

void main(){
    int i, N, log = 0;

    printf("Enter N: ");

    scanf("%d", &N);

    /* Computing Floor(log(N, BASE)) */

    /* Loop invariant : i = BASE^log and i <= N, Assume N>0 */

    i = 1;
    while (i <= N){
        i = i * BASE;
        log = log + 1;
    }

    printf("Floor og log(%d, %d) = %d\n", N, BASE, log-1);
    
}