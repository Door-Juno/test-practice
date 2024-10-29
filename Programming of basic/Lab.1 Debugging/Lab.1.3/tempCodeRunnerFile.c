#include <stdio.h>
int main() {
    int i,n,m,f;
    scanf("%d %d",&n,&m);
    f= 1;
    i = n;

    while ( i<= m ){
        f= f* i;
        i++;
    }
    printf("%d\n",f);
    return  0;
}