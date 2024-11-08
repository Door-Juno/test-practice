#include <stdio.h>
#define SIZE 100

int *mmax(int n, int m, int *x, int *a, int *b);

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int A[SIZE][SIZE];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&A[i][j]);
        }
    }
    int i,j;
    int *maxptr = mmax(n,m,&A[0][0],&i,&j); // &A[0][0] == A와 동일
    printf("%d %d %d %d",*maxptr,A[i][j],i,j);
}


int *mmax(int n, int m, int *x, int *a, int *b) { // x == x[0][0]
    int max = x[0]; // 
    int *maxp;
    for(int i = 0 ; i < n; i++){
        for(int j= 0;  j < m; j++){
            int cur = *(x + i * SIZE + j); // 
            if(cur > max){
                max = cur ;
                maxp = x + i * SIZE + j; // 최댓값의 포인터값
                *a = i;
                *b = j;
            }
        }
    }
    return maxp;
}
