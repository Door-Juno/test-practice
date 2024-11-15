#include <stdio.h>
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(char *str) {
    int n = 0;
    char *p = str;
    while (*p != '\0') {
        p++;
        n++;
    }
    
    for (int i = 0; i < n / 2; i++) {
        swap(str+i, str+n-i-1);
    }
}

int main() {
    char str[100];
    gets(str);      
    reverse(str);  
    puts(str);     
    return 0;
}
