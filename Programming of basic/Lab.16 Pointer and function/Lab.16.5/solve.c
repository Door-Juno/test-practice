#include <stdio.h>

// Function prototypes
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);
void which_function();

// Array of function pointers
double (*farr[4])(double, double);

int main() {
    int n;
    double a, b;
    char op;
    double (*f)(double, double);

    which_function(); // Initialize the farr array

    scanf("%d", &n);
    while (n--) {
        scanf("%lf %c %lf", &a, &op, &b);
        switch (op) {
            case '+': f = farr[0]; break;
            case '-': f = farr[1]; break;
            case '*': f = farr[2]; break;
            case '/': f = farr[3]; break;
            default:
                printf("Invalid operator\n");
                continue;
        }
        printf("%.4lf\n", f(a, b));
    }
    return 0;
}

// Function implementations
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
        return 0;
    }
}

void which_function() {
    farr[0] = add;
    farr[1] = sub;
    farr[2] = mul;
    farr[3] = div;
}
