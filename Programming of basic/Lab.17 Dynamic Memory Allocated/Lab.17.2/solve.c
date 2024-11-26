#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node 구조체 정의
typedef struct _node {
    char name[20];
    int price;
    struct _node *next;
} node_t;

// 노드 생성 함수
node_t *create_node(char *name, int price) {
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    *new_node -> name = (node_t *)malloc(sizeof(strlen(name)+1)); // node의 name영역 할당
    strcpy(new_node->name, name); // 이거 조심할것 
//  new_node -> name = name; 을 해버리면 valid하지 않게된다.
    new_node->price = price;
    new_node->next = NULL;
    return new_node;
}

// 연결 리스트에 노드 추가 함수
void append_node(node_t **head, node_t *node) {
    if (*head == NULL) {
        *head = node;
    } else {
        node_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = node;
    }
}

// 두 번째로 비싼 과일 찾기 함수
node_t *find_second(node_t *head) {
    if (head == NULL || head->next == NULL) {
        return NULL; // 노드가 0개 또는 1개만 있을 경우 NULL 반환
    }

    node_t *largest = NULL, *second_largest = NULL;
    node_t *current = head;

    while (current != NULL) {
        if (largest == NULL || current->price > largest->price) {
            second_largest = largest;
            largest = current;
        } else if (second_largest == NULL || (current->price > second_largest->price && current->price < largest->price)) {
            second_largest = current;
        }
        current = current->next;
    }

    return second_largest;
}

int main() {
    int n;
    scanf("%d", &n);

    node_t *head = NULL;
    char str[20];
    int price;

    for (int i = 0; i < n; i++) {
        scanf("%s %d", str, &price);
        node_t *ptr = create_node(str, price);
        append_node(&head, ptr);
    }

    node_t *second = find_second(head);
    if (second != NULL) {
        printf("%s %d\n", second->name, second->price);
    } else {
        printf("두 번째로 비싼 과일을 찾을 수 없습니다.\n");
    }

    // 메모리 해제
    node_t *current = head;
    while (current != NULL) {
        node_t *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
