#include <stdio.h>

int fun (int x, int y){
    int q = (x < 0) + 2 * (y < 0);

    switch (q){
    case 1: return 2;
    case 2: return 3;
    case 4: return 1;
    case 3: return 4;
    default: return 0;
    }
}

int main(){
    printf("%d\n",fun(5,5));
    printf("%d\n",fun(5,-5));
    printf("%d\n",fun(-5,5));
    printf("%d\n",fun(5,-5));
    printf("%d\n",fun(0,0));
}