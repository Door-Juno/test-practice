#include <stdio.h>

int main(){
    int arr[1000000];
    int n ,max = -1000000,min = 1000000;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i] ;
        }
        if(arr[i] < min){
            min = arr[i] ;
        }
    }
    printf("%d %d",min,max);
}