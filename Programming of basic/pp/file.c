#include <stdio.h>

int main() {
    FILE *fout;
    fout = fopen("output.txt","wb"); // file을 생성 , fopen("파일 이름","모드") - wt (write , text)
    int x = 2024 ;  
    fprintf(fout,"Hello, world %d\n",x); //stdout : 표준출력(consol)을 의미하는 pointer. 
    fclose(fout); // 열었으면 닫아줘야함

    FILE *fin;
    fin = fopen("output.txt","rt");
    char buf[20];
    fscanf(fin,"%s",buf); // scanf는 공백을 단위로 read함. Hello, 만 읽어짐.
    
    fprintf(stdout,"%s\n",buf);
    fclose(fin);
}