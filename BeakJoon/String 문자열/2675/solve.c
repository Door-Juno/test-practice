#include <stdio.h>
#include <string.h>

int main(){
    int T, R ;
    char str[21];
    scanf("%d",&T);
    
    for(int i = 0 ; i < T ; i ++){
        scanf("%d %s",&R,str);
        int n = strlen(str);
        for(int j = 0 ; j < n ; j ++ ){ //j = index
            for(int k = 0 ; k < R; k ++ ){
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
}