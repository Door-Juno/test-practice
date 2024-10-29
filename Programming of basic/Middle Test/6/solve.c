#include <stdio.h>

int main(){
    int a[][2] = {{2,3},{3,4},{4,5}};
    int b[][3] = {{1,2,3},{3,2,1}};
    int c[10][10] ;

    for(int i = 0 ; i < 3 ;i++){
        for(int j = 0; j<3;j++){
            c[i][j] = 0;
            for(int k = 0 ; k < 2 ; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i =0 ; i < 3 ; i ++){
        for(int j = 0 ; j < 3; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}