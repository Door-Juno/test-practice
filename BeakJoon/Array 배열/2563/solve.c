#include <stdio.h>

int main(){
    int arr[100][100];
    int cnt = 0 ;
    int T,x,y; 
    scanf("%d",&T);
    for(int i = 0 ; i < 100 ; i++){
        for(int j = 0 ; j < 100 ; j++){
            arr[i][j] = 0;
        }
    }

    for(int i = 0 ; i < T ; i ++){
        scanf("%d %d",&x,&y);
        for(int a = x ; a<x+10; a++){
            for(int b = y ; b<y+10; b++){
                arr[a][b] = 1;
            }
        }
    }
    for(int i = 0 ; i < 100 ; i++){
        for(int j = 0 ; j < 100 ; j++){
            if(arr[i][j] == 1) cnt ++;
        }
    }
    printf("%d",cnt);
}