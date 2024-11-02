#include <stdio.h>

int main(){
    int N ; 
    scanf("%d",&N);

    for(int i = N ; i > 1 ; i -= 4 ){
        printf("long ");
    }
    printf("int");
}