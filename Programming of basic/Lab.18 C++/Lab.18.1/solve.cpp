#include <iostream>
using namespace std;

class Complex {
    public : 
        int real;
        int imag;
        void mult(Complex *x);
        string toString();
};

int main(){
    Complex a,b;
    cin >> a.real >> a.imag;
    cin >> b.real >> b.imag;
    a.mult(&b);
    cout << a.toString() << endl;
}

string Complex ::toString(){
    string s = "(";
    s+= to_string(this->real);
    s+= ") + (";
    s+= to_string(this->imag);
    s+= ")i";
    return s;
}

void Complex::mult(Complex *x){
   this->real = this->real * (x->real) - this->imag *(x->imag);
   this->imag = this->real * (x->imag) + this->imag *(x->real);
}