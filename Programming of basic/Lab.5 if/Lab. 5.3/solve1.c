#include <stdio.h>

int main() {
    int n ;
    scanf("%d", &n) ;
    if( n % 3 == 0 && n % 5 == 0){
        printf("combo\n");
    }
    else if( n % 3 == 0 ){
        printf("pizza\n");
    }
    else if ( n % 5 == 0){
        printf("chicken\n");
    }
    else {
        printf("diet\n");
    }
}