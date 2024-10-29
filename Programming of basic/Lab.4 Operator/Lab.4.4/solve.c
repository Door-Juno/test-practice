#include <stdio.h>

int main() {
    char a,b,c ;
    scanf("%c %c %c", &a, &b, &c);
    int x = 0x3FFFFFF;
    x &= ~( 1<< (a - 'A'));
    x &= ~( 1<< (b - 'A'));
    x &= ~( 1<< (c - 'A'));
    printf("%07x\n", x);
}