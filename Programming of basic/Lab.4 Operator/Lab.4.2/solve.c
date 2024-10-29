#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,x,y,z;
    scanf("%d %d %d", &a, &b, &c);
    x=a;
    x=(x<b)?b:x; 
    x=(x<c)?c:x; 
    y=a;
    y=(y>b)?b:y;
    y=(y>c)?c:y;
    printf("%d %d\n",x,y);
    z=(a%2!=0);
    z+=(b%2!=0);
    z+=(c%2!=0);
    printf("%d %d\n",z,3-z);
}