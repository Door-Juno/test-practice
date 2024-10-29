#include <stdio.h>
#define true 1 
#define false 0 
typedef unsigned long long long_t; //64비트 

int main () {
    long_t N ;
    scanf("%llu",&N);
   
   int maxCount = 0 , curCount=0;

   for ( int i = 63 ; i >= 0 ; i --){
        if ( (N >> i)& 1 ){
            curCount ++ ;
            if(curCount > maxCount ){
                maxCount = curCount ; 
            }
        }
        else {
            curCount = 0 ;
        }
    }
    printf("%d\n",maxCount);
}