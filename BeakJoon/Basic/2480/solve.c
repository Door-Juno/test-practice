#include <stdio.h>

int main(){
    int a,b,c;
    int max;
    int money ;

    scanf("%d %d %d",&a,&b,&c);
    max = a;
    if(a == b){
        if(a == c){
            //3개다 같음
            money = 10000 +1000 * a;
        }
        else{
            money = 1000 + 100 * a;
        }
    }
    else if(b==c){
        if(a != b){
            // 2개 같음
            money = 1000 + 100 * b;
        }
    }
    else if(a == c){
        if(a != b){
            money = 1000 + 100*a;
        }
    }
    else {
        if( max < b){
            max = b ; 
        }
        if( max < c ){
            max = c ;
        }
        money = max * 100;
    }
    printf("%d",money);
}