#include <stdio.h>

int main(void)
{
    double A , R , M;
    int N, i;
    
    scanf("%lf", &A);
    scanf("%lf", &R);
    scanf("%lf", &M);
    scanf("%d", &N);

    for (i = 1; i <= N; ++i){
       A = (A - M) + (A * R /100 /12);
       printf("%d: $%.2f\n", i, A);
    }
    return 0;       
}