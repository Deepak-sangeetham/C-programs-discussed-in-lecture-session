#include <stdio.h>

#define N 20

void incrArray(int A[], int size){
    for(int i = 0; i < size; ++i){
        A[i]++;
        *(A+i) = *(A+i) - 1;

    }
}

void printArray(int A[], int size){
    for(int i = 0; i < size; ++i){
        printf("A[%d] = %d\n", i, A[i]);
    }
}

int main(){

    int A[N];

    for (int i = 0; i < N; ++i){

        A[i] = i;
    }

    incrArray(A, N);

    printArray(A, N);
}