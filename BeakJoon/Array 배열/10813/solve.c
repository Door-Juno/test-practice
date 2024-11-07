#include <stdio.h>
int main(){
    int arr[101];
    int n,m,x,y;
    int temp;
    scanf("%d %d",&n,&m);
    for(int i = 1 ; i<= n ; i++){
        arr[i]= i;
    }

    for(int i = 1; i <= m ; i++){
        scanf("%d %d",&x,&y);
        temp = arr[x];
        arr[x] = arr[y];
        arr[y]= temp;
    }

    for(int i = 1 ; i <= n ; i++){
        printf("%d ",arr[i]);
    }
}