#include <stdio.h>

int main() {
    int c1, c2;
    scanf("%o %x", &c1, &c2);
    printf("%c %c\n",c1, c2);   
    printf("%5d %5d %5d\n",c1, c2, c1+c2);
    printf("0%04o 0%04o 0%04o\n",c1, c2,c1+c2);
    printf("0x%03x 0x%03x 0x%03x\n",c1, c2, c1+c2);
}