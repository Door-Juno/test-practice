#include <stdio.h>
#include <math.h>

int main () {
    unsigned long long int N ;
    scanf("%llu",&N);
    int flag = 1; 
    while(N>0){
        if(flag==1){
            if(N%10!=0){
                printf("%llu", N%10);
                flag = 0 ;
            }
        }
        else{
            printf("%llu",N%10);
        }
        N /= 10 ;
    }
}