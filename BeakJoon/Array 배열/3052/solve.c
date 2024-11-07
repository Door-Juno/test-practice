#include <stdio.h>
int main(){
    int num[42] ;
    int a ;
    int cnt = 0;

    for(int i = 0 ; i <42 ; i++){
        num[i] = 0;
    }

    for(int i = 0 ; i < 10 ; i ++){
        scanf("%d",&a);
        num[a%42] ++;
    }

    for(int i = 0 ; i < 42 ; i++){
        if(num[i] != 0) cnt ++;
    }

    printf("%d",cnt);
}