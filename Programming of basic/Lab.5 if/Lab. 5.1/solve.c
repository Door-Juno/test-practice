#include <stdio.h>

int main() {
    int n ; 
    scanf("%d", &n) ;
    if (n % 2 == 1 || n % 2 == -1)
        printf("odd\n");
    else if ( n % 2 == 0)
        printf("even\n");
}