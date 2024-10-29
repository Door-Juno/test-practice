#include <stdio.h>

int fun(int n){
    int cnt = 0 ;
    for(int i = 2 ; i < n ; i++){
        if(n%i ==0){
            cnt ++ ;
        }
    }
    return cnt ;
}

int main(){
    printf("%d\n",fun(10));
    printf("%d\n",fun(11));
    printf("%d\n",fun(121));
    printf("%d\n",fun(128));
    printf("%d\n",fun(1234));
}