#include <stdio.h>
#include <string.h>

int main(){
    char str[101] = {0};
    int flag = 1;
    scanf("%s",str);

    int n = 0;  // n은 글자수 
    while(str[n]!='\0'){
        n++ ; 
    }
    n = strlen(str);

    for(int i = 0 ; i < n/2 ; i ++){
        if(str[i] != str[n-i-1]){
            flag = 0;
            break;
        }
    }
    (flag == 1 ) ? printf("1") : printf("0");

}