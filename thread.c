#include <stdio.h>
#include <assert.h>
#include <pthread.h>
int counter = 0 ;
void *mythread (void *arg){
    printf("%s\n",(char *)arg);
    for(int i = 0 ; i <10000000 ; i++){
        counter ++ ;
    }
    printf("%s : done \n",(char *) arg);
    return NULL ;
}

int main(int argc, char *argv[]){
    pthread_t p1, p2;
    int rc;
    printf("main: begin (Counter : %d)\n",counter);
    pthread_create(&p1, NULL , mythread, "A");
    pthread_create(&p2,NULL,mythread,"B");
    pthread_join(p1,NULL);
    pthread_join(p2,NULL);
    printf("main: end (Counter : %d)\n",counter);
    return 0;
}