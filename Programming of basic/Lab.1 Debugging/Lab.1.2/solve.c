#include <stdio.h>

int main() {
    int i, n, m, s;
    scanf("%d %d",&n,&m);
    s = 0;
    i=n;
    while ( i<=m){
        s += i;
        i++;
    }
    printf("%d\n",s);

    return 0;
}