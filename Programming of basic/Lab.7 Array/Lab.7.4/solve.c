#include <stdio.h>

int main(){
    int n,m,a[10][10],b[10][10],c[10][10];
    scanf("%d %d",&n,&m);

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            scanf("%d",&c[i][j]);
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++ ){
            printf("%d",a[i][j]+b[i][j]-c[i][j]);
            if( j < m-1 ) printf(" ");
        }
        printf("\n");
    }
}