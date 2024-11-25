#include <iostream>

void swap(int &x, int &y){
    int t = x;
    x = y;
    y = t;
}

int main(){
    int x = 10, y = 20;
    swap(x,y);
    std::cout << x << " " << y << std::endl;
}