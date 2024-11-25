#include <stdio.h>
#include <stdlib.h>

//Linked List 구현
typedef struct linked_list NODE;
typedef struct linked_list *LINK ;
struct linked_list {
    int data ;
    LINK next ;
};

//create() 구현
// data를 인수로 가지는 노드를 생성하고, 노드의 주소를 리턴한다.
LINK create(int data) {
    NODE *p;
    p = (NODE *)malloc(sizeof(NODE));
    p -> data = data;
    p -> next = NULL ;
    return p; 
}

//append() 구현
void append(LINK *head, int data){
    LINK p = create(data);
    //첫번째 노드라면, 방금 생성된 노드의 주소가 head
    if( *head == NULL ){
        *head = p;
    }
    //첫번째 노드가 아니라면 , 노드를 만들고, 전과 연결
    else { 
        // trail을 이용해 리스트의 끝으로 이동
        LINK trail = *head ;
        while(trail -> next != NULL){
            trail = trail -> next ; 
        }
        // 리스트의 마지막 link를 새로운 노드로 설정
        trail -> next = p;
    }
}

LINK insert_first(LINK *head, int data){
    LINK p = (NODE *)malloc(sizeof(NODE));
    p -> data = data ;
    p -> next = *head;
    *head = p;
    return *head;
}

LINK insert(LINK *head, LINK pre, int data){
    LINK p = (NODE *)malloc(sizeof(NODE));
    p -> data = data ;
    p -> next = pre -> next ;
    pre -> next = p;
    return *head ;
}

LINK delete_first(LINK *head){
    LINK rm;
    if(*head == NULL) return NULL;
    rm = *head ;
    *head = rm -> next ;
    free(rm);
    return *head;
}

LINK delete(LINK *head, LINK pre){
    LINK rm ;
    rm = pre -> next;
    pre -> next = rm -> next;
    free(rm);
    return *head;
}

void print_list(LINK head){
    for(LINK p = head ; p != NULL ; p = p->next){
        printf("%d -> ",p->data);
    }
    printf("NULL \\n");
}

int main() {
    LINK head = NULL ;
    LINK trail = head;
    int arr[5] = {10,20,30,40,50};
    for(int i = 0 ; i < 5; i ++){
        if(trail == NULL){
            insert_first(&head,arr[i]);
            trail = trail -> next ;
        }
        else{
            insert(&head,trail,arr[i]);
        }
    }
    printf("insert|| ");
    print_list(head);
 
    
}