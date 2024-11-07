#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[1001];
    int t, strl;

    scanf("%d",&t);
    for(int i = 0 ; i < 3 ; i ++){
        str[1001] = '0';
        scanf("%s",str);
        strl = strlen(str);
        printf("%c%c\n",str[0],str[strl-1]);
    }
}
