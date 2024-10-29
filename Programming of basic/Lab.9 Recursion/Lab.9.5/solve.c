#include <stdio.h>

int cnt, depth ;

int ackermann(int n, int m , int d){
    cnt ++ ;
    if(d > depth) depth = d; 
    if(n == 0) return m+1;
    else if(n > 0 && m == 0 )
        return ackermann(n-1,1,d+1);
    else{
        return ackermann(n-1,ackermann(n,m-1,d+1),d+1);
    }
}

int main(){
    int n, m ;
    scanf("%d %d",&n,&m);
    cnt = depth = 0;
    printf("%d\n",ackermann(n,m,1));
    printf("%d\n",cnt);
    printf("%d\n",depth);
}
