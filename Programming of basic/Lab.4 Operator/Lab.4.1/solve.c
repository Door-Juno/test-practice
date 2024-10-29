#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c ;
    double x1,x2;
    scanf("%d %d %d", &a, &b, &c);
    if( a == 0){
        printf(" a is 0 !");
        return 0;
    }
    if( b*b - 4 * a * c < 0){
        printf("No solution");
        return 0;
    }
    x1 = (-b + sqrt(b*b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b*b - 4 * a * c)) / (2 * a);
    printf("%.4f\n%.4f",x1,x2);

}