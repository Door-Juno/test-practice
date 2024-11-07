#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char num1[4], num2[4];
    int    x, y;
    int temp;
    scanf("%s %s",num1,num2);
    temp = num1[0];
    num1[0] = num1[2];
    num1[2] = temp;

    temp = num2[0];
    num2[0] = num2[2];
    num2[2] = temp;

    x = atoi(num1);
    y = atoi(num2);

    ( x > y ) ? printf("%d",x) : printf("%d",y); 
}