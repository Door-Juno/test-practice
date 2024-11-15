#include <stdio.h>

typedef struct _complex complex_t;

struct _complex {
    double real;
    double imag;
};

void cmult(complex_t x, complex_t y, complex_t *z);

int main(){
    complex_t a,b,c;
    scanf("%lf %lf", &a.real, &a.imag);
    scanf("%lf %lf", &b.real, &b.imag);
    cmult(a,b,&c);
    printf("%.2f + %.2fi", c.real,c.imag);
}

void cmult(complex_t x, complex_t y, complex_t *z){
    z->real = x.real * y.real - x.imag * y.imag;
    z->imag = x.real * y.imag + x.imag * y.real;
}