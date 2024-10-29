#include <stdio.h>

int main(){
    int a,b,c;
    int N ;

    a= getchar()-'A';
    b= getchar()-'A';
    c= getchar()-'A';
    scanf("%d", &N);

    putchar('A'+(a+N)%26);
    putchar('A'+(b+N)%26);
    putchar('A'+(c+N)%26);
}