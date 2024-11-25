#include <stdio.h>

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);

void *which_function(char op);

int main(){
    int n;
    double a, b;
    char op;
    double (*f)(double x, double y);
    scanf("%d", &n);
    while (n--) {
        scanf("%lf %c %lf", &a, &op, &b);
        f = which_function(op);
        printf("%.4lf\n", f(a, b)); 
        /*
        printf(farr[2](3,4)); = 12 가 출력됨.
        printf(farr + 1 (5,2)); = 5-2 = 3 이 출력됨 .
        */
    }
}
void *which_function(char op) {
    switch (op) {
        case '+':
            return add;
        case '-':
            return sub;
        case '*':
            return mul;
        case '/':
            return div;
        default:
            return NULL; // Handle invalid operator cases
    }
}

double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}

double div(double x, double y) {
    if (y != 0)
        return x / y;
    else {
        printf("Error: Division by zero\n");
        return 0;  // Handle division by zero
    }
}
