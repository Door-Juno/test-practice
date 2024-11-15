#include <stdio.h>

int main(){
    int N, T,P ; 
    int T_size[6];
    int T_cnt = 0;

    scanf("%d",&N);
    
    for(int i = 0 ; i < 6 ; i ++){
        scanf("%d",&T_size[i]);
    }
    scanf("%d %d", &T,&P);
    for(int i = 0 ; i < 6 ; i ++){
        if(T_size[i] != 0){
            T_cnt += (T_size[i] + T -1)/ T;
        }
    }

    printf("%d\n",T_cnt);
    printf("%d %d",N/P, N%P);
}