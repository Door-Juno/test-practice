#include <stdio.h>

int *find_largest(int n, int *ptr);

int main(){
    int n, arr[100];
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int *p = find_largest(n,arr);
    printf("%d", *p);
}

int *find_largest(int n, int *ptr){
    int max = *(ptr);
    for(int i = 1; i < n; i++){
        max = (max < *(ptr + i)) ? *(ptr + i) : max;
    }
    return &max;
}