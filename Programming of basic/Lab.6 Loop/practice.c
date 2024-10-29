#include <stdio.h>
typedef unsigned long long long_t;

void for_1(){
    int cnt = 5 ; 
    for( int i = 10 ; i>=5 ; i --){
        cnt += 2 ; 
    }
    printf("%d\n",cnt);
}

void for_2 () {
    int sum = 0 ; 
    for ( int i = 0 ; i<= 10 ; i++ ){
        sum += i ; 
    }
    printf("%d\n",sum);
}

void for_3(int n){
    int sum = 0 ; 
    for( int i = 0 ; i <= n ; i ++ ){
        sum += i;
    }
    printf("%d\n",sum);
}

void for_4(){
    int s = 0 ;
    for ( int i = 1 ; i <= 10 ; i ++){
        for (int j = 1 ; j<=i ; j ++){
            s += j ; 
        }
    }
    printf("%d\n",s);
}

void for_5() {
    long_t N ;
    scanf("%llu",&N);

    int maxCount = 0, curCount=0;

    while( N != 0 ){
        if( N & 1 ) {
            curCount++;
            if(curCount > maxCount){
                maxCount = curCount;
            }   
        }
        else{
            curCount = 0 ;
        }
        N >>= 1 ;
    }
    printf("%d\n",maxCount);
}


int main() { 
    for_1(); // 6번 반복되며 , 5+ 2*6 = 17 
    for_2(); // 1~10까지 덧셈
    for_3(10); // 1 ~ parameter 까지 덧셈
    for_4(); // 1 + ( 1+2 ) + ( 1+2+3 ) + (1+2+3+4 ) ... 
    for_5();
   return 0;
}
