#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if((a<b)+(a<c)+(a<d)+(a<e) == 2) {
        printf("%d\n", a);
    }
    else if((b<a)+(b<c)+(b<d)+(b<e) == 2) {
        printf("%d\n", b);
    }
    else if((c<a)+(c<b)+(c<d)+(c<e) == 2) {
        printf("%d\n", c);
    }
    else if((d<a)+(d<b)+(d<c)+(d<e) == 2) {
        printf("%d\n", d);
    }
    else {
        printf("%d\n", e);
    }
    return 0;
}
