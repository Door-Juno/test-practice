#include <stdio.h>

int main() {
    char a,b ;
    a = getchar() ;
    b = getchar() ;
    printf("%d %d\n",a,b);

    getchar(); // 여기엔 공백 또는 엔터가 입력되는데 , scanf가 무시함

    int A,B;
    scanf("%d %d",&A,&B);
    a = (char)A;
    b = (char)B;
    printf("%c%c\n", a,b);
    return 0;
}