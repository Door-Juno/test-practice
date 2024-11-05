#include <stdio.h>

int main() {
    int a , b ,c,d;
    scanf("%d %d",&a,&b);
    d= b;
    c = b % 10 ;
    printf("%d\n",c*a);
    b /= 10;
    c = b%10;
    printf("%d\n",c*a);
    b/=10;
    c = b % 10;
    printf("%d\n",c*a);
    printf("%d\n",a*d);
}