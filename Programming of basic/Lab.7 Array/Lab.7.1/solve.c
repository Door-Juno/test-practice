#include <stdio.h>
#define SIZE 10 

int main () { 
    long long N, A[SIZE],B[SIZE],C[SIZE];
    scanf("%lld",&N); // int a[N];의 N 갑은 정적 메모리 할당을 하여야함 / 반대 개념 : 동적 메모리 할당 (malloc) / 변수를 크기로 할당하면 안됨
    for(int i = 0; i < N ; i ++)
        scanf("%lld",&A[i]);
    for(int i = 0; i< N ; i ++ )
        scanf("%lld",&B[i]);
    for(int i = 0 ; i < N ; i ++ )
        C[i]= A[i]+B[i];
    for(int i = 0 ; i < N ; i ++ ){
        printf("%lld",C[i]);
        if(i<N-1) printf(" ");
    }
}