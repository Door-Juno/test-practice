#include <stdio.h>

int main(){
    char op; 
    int a,b,c ;
    scanf("%c %d %d", &op,&a, &b) ;
    if (op =='/'){
        printf("%d = %d * %d + %d\n",a,b,a/b,a%b) ;
    }
    else{
        switch(op){
            case '+' : c = a + b; break;
            case '-' : c = a - b; break;
            case '*' : c = a * b; break;
        }
        printf("%d %c %d = %d\n",a,op,b,c) ;
    }
}