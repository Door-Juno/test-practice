#include <stdio.h>
#include <string.h>

int main(){
    char num[100000] ;

    do{
        int flag = 1;
        scanf("%s",num);
        if(num[0] == '0'){
            break;
        }
        int n = strlen(num);
        for(int i = 0 ; i < n/2 ; i++){
            if(num[i] != num[n-i-1]){
                flag = 0;
                break ; 
            }
        }
        (flag) ? printf("yes\n") : printf("no\n");
    }while(num[0]!= '0');
}