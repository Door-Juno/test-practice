#include <stdio.h>

int fun(int n, int m){
    if(n ==0)
        return m + 1 ;
    else if (m==0)
        return fun(n-1,1);
    else   
        return fun(n-1,fun(n,m-1));    
}

int main(){
    printf("%d\n",fun(1,2));
}
