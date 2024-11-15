#include <stdio.h>

typedef struct _fruit fruit_t;

struct _fruit {
    int price ;
    char name[100];
};

fruit_t *find_both(int n, fruit_t *items, fruit_t **maxptr);

int main() {
    fruit_t fruits[20];
    int n ;
    scanf("%d\n",&n);
    for(int i = 0 ; i < n; i ++){
        scanf("%s %d", fruits[i].name, &fruits[i].price);
    }

    fruit_t *maxptr, *sndptr;
    sndptr = find_both(n,fruits, &maxptr);
    printf("%s %d\n", maxptr->name, maxptr->price);
    printf("%s %d\n",sndptr->name, sndptr->price);
}

fruit_t *find_both(int n, fruit_t *items, fruit_t **maxptr){
    int maxprice = items->price;
    for(int i = 0; i < n; i++){
        if( maxprice < items[i].price){
            maxprice = items[i].price;
            *maxptr = &items[i];
        }
    }
    fruit_t *sndptr;
    int sndprice = items -> price;
    for(int i = 0 ; i < n ; i ++){
        if (items[i].price > sndprice && items[i].price < maxprice){
            sndprice = items[i].price;
            sndptr = &items[i];
        }
    }
    return sndptr;
}