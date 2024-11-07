#include <stdio.h>
#include <string.h>

int main(){
    char str[1000001];
    scanf("%[^\n]s",str);
    int n = strlen(str);
    int cnt = 0;

    for(int i = 0 ; i < n ; i++){
        if(str[i] == 32) cnt ++;
    }

    if(str[0] != 32){
        if(str[n-1] != 32) printf("%d",cnt +1);
        else if (str[n-1] == 32) printf("%d",cnt);
    }
    else {
        if(str[n-1] != 32) printf("%d",cnt);
        else if(str[n-1] == 32)printf("%d",cnt -1);
    }   
}

/* 
1. str[0] != ' '  && str[n] != ' '  띄어쓰기 수 + 1
2. str[0] != ' ' && str[n] == ' '   띄어쓰기 수
3. str[0] == ' ' && str[n] != ' '   뜨어쓰기 수
4. str[0] == ' ' && str[n] == ' '   띄어쓰기 수 -1
*/