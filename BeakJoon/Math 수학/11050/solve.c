#include <stdio.h>

int factorial(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return n * factorial(n-1);
}

int solution(int n, int k){
    return factorial(n) / (factorial(n-k)*factorial(k));
}

int main (){
    int N,K,sol;
    scanf("%d %d",&N,&K);
    printf("%d",solution(N,K));
}