/*
24.11.21 자료구조 : Linked List의 구현
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct _node node_t;
typedef struct _node *node_ptr;
struct _node{
    int data;
    node_ptr next;
};

//노드를 생성하는 함수
node_ptr create_node(int data){
    node_ptr node = (node_ptr)malloc(sizeof(node_t));
    node -> data = data;
    node -> next = NULL;
    return node;
}

//노드를 추가하는 함수
void append_node(node_ptr *head, int data){
    node_ptr node = create_node(data);
    if(*head == NULL){
        *head = node; 
    }
    else {
        node_ptr trail = *head ;
        while(trail->next != NULL){
            trail = trail -> next;
        }
        trail -> next  = node ;
    }
}

void insert_node(node_ptr head,int data){
    // head != NULL , 오른차순 순으로 삽입한다고 가정한다
    node_ptr trail = head ;
    node_ptr prev = trail;
    while(trail->data > data){
        prev = trail ;
        trail = trail -> next;
    }
    node_ptr node = create_node(data);
    node -> next = prev -> next;
    prev -> next = node ;
}

void delete_node(node_ptr head, int data){
    if(head == NULL){
        return ;
    }
    node_ptr trail = head ;
    node_ptr prev = trail ;
    while(trail -> data != data){
        prev = trail;
        trail = trail -> next ;
    }
}

int main(){
    node_ptr head = NULL ;

/*  //노드를 수동으로 생성
    node_ptr ptr ;
    ptr = create_node(10);
    head = ptr ;
    ptr = create_node(20);
    head->next = ptr ;
    ptr = create_node(30);
    head -> next -> next = ptr; 
*/

    int arr[] = {10,20,30,40};
    for(int i = 0 ; i < 4 ; i ++){
        append_node(&head,arr[i]);
    }

    insert_node(head,25);

/*
    printf("%d\n", head -> data);
    printf("%d\n", head -> next->data);
    printf("%d\n", head -> next->next->data);
*/

    node_ptr trail = head ;
    while (trail != NULL){
        printf("%d\n",trail -> data);
        trail = trail -> next;
    }
}