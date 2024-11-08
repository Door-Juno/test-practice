#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[1000001],index;
    scanf("%s",str);
    int len = strlen(str) ;
    int arr[26] = {0};
    int max = -1,cnt = 0 ;

    for(int i = 0 ; i < len ; i++){
        if(str[i] >= 97) { // 소문자일때
            arr[str[i] - 97] ++;
        }
        else { //대문자일때
            arr[str[i] - 65] ++;
        }
    }

    for(int i = 0 ; i < 26 ; i ++){
        if(max < arr[i]){
            max = arr[i] ; 
            index = i;
        }
    }
    for(int i = 0 ; i < 26 ; i ++){
        if(max == arr[i]) cnt ++;
    }
    if(cnt != 1){
        printf("?");
        return 0;
    }
    printf("%c",index + 65);
}