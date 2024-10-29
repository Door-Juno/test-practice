#include <stdio.h>

int main() {
    int a,b,c ;
    a = getchar() - '0';
    b = getchar() - '0';
    c = getchar() - '0';

    printf("%d\n", a + b + c);
    
    return 0;
}