#include <stdio.h>

void swap(int *x, int *y);
void reverse(int from,int to, int *ptr);

int main(){
    int n, arr[100], from, to;
    scanf("%d %d %d",&n, &from, &to);
    for(int i = 0 ; i < n ; i ++ ){
        scanf("%d",&arr[i]);
    }
    reverse(from, to, arr);
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

void reverse(int from , int to ,int *ptr){
    
    for ( int i = 0 ; i<= (to-from+1)/2 ; i++ ){
        swap(&ptr[from],&ptr[to]);
        from ++;
        to --;
    }
}