#include <stdio.h>

int main(){
    int x, N, arr[100];
    int cnt = 0;
    scanf("%d",&N);
    for(int i = 0 ; i < N; i ++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);

    for(int i = 0 ; i < N ; i++ ){
        if(x == arr[i]) cnt ++;
    }

    printf("%d",cnt);
}