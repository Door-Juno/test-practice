#include <stdio.h>

int main(){
    int a, b;
    long double c ;
    scanf("%d %d",&a,&b);
    c = (long double)a / b; 
    printf("%.9Lf",c);
}