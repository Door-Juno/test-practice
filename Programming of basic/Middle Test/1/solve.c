#include <stdio.h>

int main(){
    unsigned char x = 0x74, y = 33;
    printf("%d\n",x);
    printf("0x%x\n",y);
    printf("0x%x\n",x >> 2);
    printf("0x%x\n",x & y);
    printf("0x%x\n",(x|y)^0xFF);
}