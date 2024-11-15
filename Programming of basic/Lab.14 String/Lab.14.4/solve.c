#include <stdio.h>
#include <string.h>

void bubblesort(int n, char *ptr[]) {
    char *tmp;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strlen(ptr[j]) > strlen(ptr[j + 1])) {
                tmp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = tmp;
            } else if (strlen(ptr[j]) == strlen(ptr[j + 1]) && strcmp(ptr[j], ptr[j + 1]) > 0) {
                tmp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char str[10][20];
    char *ptr[10];
    
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        ptr[i] = str[i];
    }

    bubblesort(n, ptr);

    for (int i = 0; i < n; i++) {
        puts(ptr[i]);
    }

    return 0;
}
