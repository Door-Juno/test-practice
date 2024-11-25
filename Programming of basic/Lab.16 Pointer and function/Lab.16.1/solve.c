#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000000

int arr[MAX_SIZE];

int compare(const void *, const void *);

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n; i ++){
        scanf("%d",&arr[i]);
    }
    qsort(&arr[0],n,sizeof(int),compare);
    for(int i = 0 ; i < n; i ++){
        printf("%d\n",arr[i]);
    }
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b); // 리턴 부분 공부할것 
}
/*
int compare(const void *x, const void *y){
    int *a = (int *)x;
    int *b = (int *)y;
    return *a - *b;
}
*/
