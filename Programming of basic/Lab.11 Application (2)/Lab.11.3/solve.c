#include <stdio.h>
#define MAX 1000

int cnt;

void swap(int a[],int i, int j);
void bubblesort(int n, int a[]);

int main(){
    int N,A[MAX];
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&A[i]);
    }

    cnt = 0;
    bubblesort(N,A);
    printf("%d\n",cnt);
    for(int i = 0 ; i < N ; i++){
        printf("%d ",A[i]);
    }
}
void swap(int a[],int i, int j){
    int temp ;
    temp = a[j] ;
    a[j] = a[i];
    a[i] = temp;
    cnt ++;
}

void bubblesort(int n, int a[]){
    for(int i = 0 ; i<n-1 ; i++){
        for(int j = 0 ; j < n-1-i; j++){
            if(a[j]> a[j+1]){
                swap(a,j,j+1) ;
            }
        }
    }
}