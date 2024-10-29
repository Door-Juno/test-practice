#include <stdio.h>

int dist(char x, char y){
    char c = x^y;
    int d= 0;
    for(int i = 0 ; i < 8 ; i ++){
        d += (c&(1<<i)) ? 1 : 0;
    }
    return d;
}


int main(){
    printf("%d\n",dist(0xFF,0x00));
    printf("%d\n",dist(0x73,0x37));
    printf("%d\n",dist(0x46,0x7F));
    printf("%d\n",dist('Z'-'A','9'-'0'));
    printf("%d\n",dist('P'-'A','9'-'3'));
}