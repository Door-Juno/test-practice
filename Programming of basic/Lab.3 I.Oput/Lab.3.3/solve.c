#include <stdio.h>

int main() {
    int a,b,c;
    a= getchar()-65;
    b= getchar()-65;
    c= getchar()-65;
    putchar(65+(a+13)%26);
    putchar(65+(b+13)%26);
    putchar(65+(c+13)%26);
}