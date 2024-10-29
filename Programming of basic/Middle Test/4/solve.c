#include <stdio.h>

int main(){

    int a,b,c,d,e;
    a=b=c=d=e=0;

    for(int i = 1 ; i <= 10; i ++){
        for(int j = 1; j <= 10; j++){
            a++;
        }
    }
    printf("%d\n",a);

    for(int i = 1 ; i <= 10; i +=2){
        for(int j = 1; j <= 10; j+=2){
            b++;
        }
    }
    printf("%d\n",b);

    for(int i = 1 ; i <= 10; i ++){
        for(int j = 1; j <= i; j++){
            c++;
        }
    }
    printf("%d\n",c);

    for(int i = 1 ; i <= 10; i ++){
        for(int j = 1; j <= i ; j*= 2){
            d++;
        }
    }
    printf("%d\n",d);

    for(int i = 1 ; i <= 10; i ++){
        for(int j = i; j>= 1; j/=2){
            e++;
        }
    }
    printf("%d\n",e);
}