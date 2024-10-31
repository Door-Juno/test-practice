#include <stdio.h>

#define MAX 100

int square[MAX][MAX];

int check_row(int n , int magic){
    int num = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            num += square[j][i] ;
        }
        if(num != magic) return 0;
    }
    return 1;
}

int check_cols(int n, int magic){
    int num = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            num += square[i][j] ;
        }
        if(num != magic) return 0;
    }
    return 1;
}

int check_diag(int n, int magic){
   int num = 0;
    for(int i = 0 ; i < n ; i++){
        num += square[i][i] ;
    }
    if(num != magic) return 0;

    num = 0;
    for(int i = n ; i >= 0 ; i --){
        for(int j = 0 ; j < n; j++){
            num += square[i][j];
        }
    }
    if(num != magic) return 0;

    return 1;
}
int check_uniq(int n){
    int a ;
    int abc[MAX*MAX]= {0};
    for(int i = 1 ; i <= n*n ; i++){
        abc[i] = 1 ;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n; j++){
            abc[square[i][j]]++;
        }
    }
    for(int i = 0 ; i < n*n ; i++){
        if(abc[i] != 1) return 0; 
    }
    return 1;
}


int main(){
    int N;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; i++){
            scanf("%d",&square[i][j]);
        }
    }
    int magic = 0;
    for(int i = 0 ; i < N ; i++){
        magic += square[0][i];
    }
    if(check_row(N,magic)&&check_cols(N,magic) && check_diag(N, magic) && check_uniq(N)){
        printf("%d",magic);
    }
    else{
        printf("0");
    }
}