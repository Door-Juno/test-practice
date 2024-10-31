#include <stdio.h>

#define MAX 100

int square[MAX][MAX];

void magic(int n);

int main(){
    int n;
    scanf("%d",&n);
    magic(n);
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n; j ++){
            printf("%d ",square[i][j]);
        }
        printf("\n");
    }
}

void magic(int n){
    int i = 0, j =n/2 ;
    for(int k = 1; k <= n*n;k++){
        square[i][j] = k; 
        i = (i == 0)? n-1 : i - 1; 
        j = (j+1)%n; 
        if(square[i][j] != 0){  
            i = (i + 2)%n;
            j = (j == 0)? n-1: j-1;
        }
    }
}
// 이미 숫자가 들어간 경우 자기 자신의 아랫칸에 