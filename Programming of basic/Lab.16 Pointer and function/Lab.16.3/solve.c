#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000000

typedef struct _fruit fruit_t;
struct _fruit {
    char name[20];
    int price ;
};

fruit_t fruits[MAX_SIZE];

int compare(const void *, const void *);

int main(){
    int n ;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i ++){
        scanf("%s %d",fruits[i].name,&fruits[i].price);
    }
    qsort(fruits,n,sizeof(fruit_t),compare);
    for(int i = 0 ; i < n ; i ++){
        printf("%s %d\n",fruits[i].name,fruits[i].price);
    }
}

int compare(const void *a, const void *b) {
    const fruit_t *f1 = (const fruit_t *)a;
    const fruit_t *f2 = (const fruit_t *)b;

    // Compare by name length
    int len_diff = strlen(f1->name) - strlen(f2->name);
    if (len_diff != 0) {
        return len_diff;
    }

    // Compare by alphabetical order of names
    int name_cmp = strcmp(f1->name, f2->name);
    if (name_cmp != 0) {
        return name_cmp;
    }

    // Compare by price in descending order
    return f2->price - f1->price;
}
