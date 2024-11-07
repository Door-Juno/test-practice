#include <stdio.h>
int main(){
    int n,m,arr[1001];
    int x,y,z;
    scanf("%d %d",&n,&m);
    for(int i = 1 ; i <= n ; i++){
        arr[i] = 0;
    }
    
    for(int i = 1 ; i <= m ; i++){
        scanf("%d %d %d",&x , &y , &z);
        for(int i = x; i <= y ; i++){
            arr[i] = z;
        }
    }
    
    for(int i = 1 ; i <= n ; i++){
        printf("%d ",arr[i]);
    }
}