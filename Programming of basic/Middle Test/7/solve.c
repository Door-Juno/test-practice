#include <stdio.h>

void fun(int n ){
    if(n == 1 || n == 7)
        printf("%d",n);
    else{
        printf("%d ", n);
        if(n%2==0)
            fun(n/2);
        else    
            fun(3*n-1);
    }
}

int main(){
    fun(9);
}