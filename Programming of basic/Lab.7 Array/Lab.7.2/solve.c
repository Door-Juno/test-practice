#include <stdio.h>
int main () {
    int freq[26]={0};
    int N,count = 0 ;
    char alpha;

    scanf("%d\n",&N);
    while (N-- > 0){
        scanf("%c",&alpha);
        freq[alpha - 'A']++; //freq에 알파벳 번호 하나씩 저장 
    }

    int max = 0;

    for(int i = 0 ; i < 26 ; i ++){
        if(freq[i] > max) max = freq[i];
    }
    for(int i = 0 ; i < 26 ; i ++){
        if(freq[i] == max) printf("%d\n",'A'+i);
    }
}