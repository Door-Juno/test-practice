#include <stdio.h>

int main() {
    int n; 
    scanf("%d",&n);
    int a,b,c; 
    int count = 0 ;
    for ( a = 1; a <= n ; a++){
        for(b=a; b<=n ; b++){
            c= n - (a + b ); // a,b,가 정해져버리면 c도 정해짐. ( a + b + c = n )
            if(c >= b){ // c<n 조건이 필요한가 ?
                count ++ ;
            }
        }
    }
    printf("%d\n",count);

}
/*
3중 for 일때 -> Big(O) = N^3
2중 for 일때 -> Big(O) = N^2

이문제 기출 나옴 . 3중 for -> 2중 for로 변환하는 경우
*/