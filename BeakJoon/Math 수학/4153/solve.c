#include <stdio.h>

int main(){
    int a[3];
    int temp;
    int min = 30000 , max = 0;
    while(1){
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        if( a[0] == 0 && a[1] ==0 && a[2]== 0){
            break ;
        }
        for(int i = 2; i > 0; i--){
            for(int j = 0 ; j < i ; j++){
                if(a[j] > a[j+1]){
                    temp = a[j] ;
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }


        if(a[2] * a[2] == a[1]*a[1] + a[0] * a[0]){
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }
    }
}