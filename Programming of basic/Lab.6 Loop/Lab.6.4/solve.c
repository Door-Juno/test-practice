#include <stdio.h>

int main() {
    int odd = 1 ; 
    int N ;

    scanf("%d",&N);
    for(int i = 1 ; i <= N ; i++ ){
        for(int j = 1 ; j<=i ; j ++ ){
            printf("%d", odd);
            if(j < i) printf(" ");
            odd += 2 ; // 다음 홀수로 전환 
        }
        printf("\n");
    }
}