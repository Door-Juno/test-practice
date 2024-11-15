#include <stdio.h>

int main(){
    int N ,num;
    int arr[10001];
    scanf("%d",&N);
    for(int i = 0 ; i < N ; i ++){
        scanf("%d",&num);
        arr[num] ++ ;
    }
    for(int i = 0 ; i < N; i ++){
        for(int j = arr[i] ; j > 0 ; j --){
            printf("%d\n",i);
        }
    }
}