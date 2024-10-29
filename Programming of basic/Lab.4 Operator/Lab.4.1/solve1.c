#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c ;
    scanf("%d %d %d", &a, &b, &c);
    double d = sqrt(b*b - 4 * a * c);
    double x1 = (-b + d) / (2 * a);
    double x2 = (-b - d) / (2 * a);
    printf("%.4f\n%.4f\n",x1,x2);

}