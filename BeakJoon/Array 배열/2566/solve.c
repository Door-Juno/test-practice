#include <stdio.h>

int main(){
    int arr[9][9] ;
    int max, a,b;
    for(int i = 0 ; i < 9 ; i ++){
        for(int j = 0 ; j < 9 ; j ++){
            scanf("%d",&arr[i][j]);
        }
    }
    max = -1;
    for(int i = 0 ; i < 9 ; i ++){
        for(int j = 0 ; j < 9 ; j ++){
            if(arr[i][j] > max){
                max = arr[i][j];
                a= i+1;
                b= j+1;
            }
        }
    }
    printf("%d\n",max);
    printf("%d %d",a,b);
}