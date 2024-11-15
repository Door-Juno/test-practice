#include <stdio.h>

void swap(int *x, int *y);
void reverse(int n, int *ptr);

int main(){
    int n, arr[100];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i ++ ){
        scanf("%d",&arr[i]);
    }
    reverse(n,&arr[0]);
    for(int i = 0 ; i < n ; i ++){
        printf("%d ",arr[i]);
    }
}

void swap(int *x,int *y){
    int temp ;
    temp = *x;
    *x = *y;
    *y = temp;    
}

void reverse(int n, int *ptr){
    for(int i = 0 ; i < n/2  ; i ++){
        swap(&ptr[i],&ptr[n-i-1]);
    }
}