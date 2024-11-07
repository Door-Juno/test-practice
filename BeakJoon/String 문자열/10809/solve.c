#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    int arr[26] ;

    scanf("%s",str);

    int n = strlen(str);
    for(int i = 0 ; i < 26 ; i++){
        arr[i] = -1;
    }

    for(int i = 97 ; i <= 122 ; i ++){
        for(int j = 0 ; j < n ; j ++){
            if(i == str[j]){
                arr[i-97] = j;
                break;
            }
        }
    }

    for(int i = 0 ; i < 26 ; i++){
        printf("%d ",arr[i]);
    }
}