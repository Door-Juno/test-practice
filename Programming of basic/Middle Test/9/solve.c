#include<stdio.h>

int x = 10;
void fun(int y){
    int x = y + 10;
    printf("%d\n",x); // (3)
    for(int i = 0 ; i < 10 ; i ++)
        x++;
    printf("%d\n",x); // (4)
}

int main(){
    printf("%d\n", x); // (1) 
    int x = 20; 
    int* ptr = &x;
    printf("%d\n", x); // (2) 
    fun(x + 10);
    printf("%d\n", x); // (5)
    printf("%d\n", *ptr);
}