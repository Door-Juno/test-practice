#include <stdio.h>
#include <math.h>

int is_prime(unsigned int n);
void solve();

int main (){
    int N ;
    scanf("%d",&N);
    solve();
}


int is_prime(unsigned int n){
    if( n < 2 ) return 1;
    for(unsigned int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0 ) return 0;
    }
    return 2;
}

void solve(){

}