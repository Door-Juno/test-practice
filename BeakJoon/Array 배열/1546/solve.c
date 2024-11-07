#include <stdio.h>

int main(){
    int N, M = 0 ;
    double sum = 0;
    int score[1000] = {0, };
    double sco[1000] = {0, };

    scanf("%d",&N);
    for(int i = 0 ; i < N ; i ++){
        scanf("%d",&score[i]);
        if( M < score[i]){
            M = score[i] ;
        }
    }
    for(int i = 0 ; i < N ; i++){
        sco[i] = (double)score[i] * 100 / M ;
        sum += sco[i];
    }
    printf("%f",sum/N);
}