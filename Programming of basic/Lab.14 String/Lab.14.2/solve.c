#include <stdio.h>
#include <string.h>

void bubblesort(int n, char (*str)[20]) {
    char tmp[20];
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(tmp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], tmp);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); 
    char str[10][20]; 
    

    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    bubblesort(n, str);

    for (int i = 0; i < n; i++) {
        puts(str[i]);
    }

    return 0;
}
