#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node node_t;
struct _node {
    char name[20] ;
    int value ;
    node_t *next ;
};

node_t *create_node(char *name, int data );
void append_node(node_t **head, node_t *node);
void remove_node(node_t **head, node_t *node);
void print_node(node_t **head);
node_t *largest_node(node_t **head);

int main() {
    int n ;
    int price ;
    char str[20];
    node_t *head = NULL ;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%s %d",str,&price);
        node_t *ptr = create_node(str,price);
        append_node(&head, ptr);
    }
    node_t *largest = largest_node(&head);
    printf("%s %d",largest->name,largest->value);
    
}

node_t *create_node(char *name, int data){
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    strcpy(new_node->name, name);
    new_node->value = data ;
    new_node->next = NULL ;
    return new_node ;
}

void append_node(node_t **head, node_t *node){
    if(*head == NULL){
        *head = node ;
    }
    else {
        node_t *current = *head ;
        while(current -> next != NULL){
            current = current -> next ;
        }
        current -> next = node ;
    }
}

void remove_node(node_t **head, node_t *node){
    if(*head == NULL || node == NULL ){
        return ;
    }
    if(*head == node){
        *head = node -> next ;
    }
    else {
        node_t *current = *head ;
        while(current -> next != NULL && current -> next != node){
            current = current -> next ;
        }
        if(current -> next == node){
            current -> next = node -> next ;
        }
    }
}

void print_node(node_t **head){
    if(*head == NULL){
        return ;
    }
    node_t *current = *head ;
    while (current != NULL){
        printf("%s %d\n",current->name, current->value);
        current = current->next;
    }
}

node_t *largest_node(node_t **head){
    node_t *current = *head;
    node_t *largest = current;
    while(current!= NULL){
        if(current->value >largest->value){
            largest = current;
            current = current -> next ;
        }
    }
    return largest;
}