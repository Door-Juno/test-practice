#include <stdio.h>

int main(){
    int a,b,c;
    int hour, min ;
    scanf("%d %d",&a,&b);
    hour = a , min = b;
    scanf("%d",&c);
    
    min += c ;
    if (min > 60 ){
        hour += min / 60;
        min = min % 60;
    }
    if (hour >= 24)
    hour %= 24;

    printf("%d %d",hour ,min);
    
}