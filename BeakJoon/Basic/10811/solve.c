#include <stdio.h>

int main(){
    int N, M ;
    int x,y,temp;
    int arr[101];

    scanf("%d %d",&N , &M);
    for(int i = 0  ; i < N ; i++){
        arr[i] = i+1;
    }
    for(int i = 0; i < M ; i ++){
        scanf("%d %d",&x,&y);
        int g = y;
        for(int j = x - 1; j < g; j++ ){
            temp = arr[j];
            arr[j] = arr[g-1];
            arr[g-1] = temp ;
            g--;
            if((g -1) <= j){
                break;
            }
        }
    }

    for(int i = 0 ; i < N ; i++){
        printf("%d ",arr[i]);
    }
}

