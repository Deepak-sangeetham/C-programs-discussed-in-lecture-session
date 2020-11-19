/* Write a program which reads the table of that number*/

#include <stdio.h>

void main(){
    int i, N;

    printf("Enter the Table you would like to print:");

    scanf("%d", &N);

    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", N, i, N*i);
        sleep(1);
    }
    
    return 0;
}