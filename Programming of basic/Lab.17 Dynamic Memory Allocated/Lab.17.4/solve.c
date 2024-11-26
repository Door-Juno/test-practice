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
    strcpy(new_node->name, name);
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

// 가장 비싼 과일을 찾는 함수
node_t *find_largest(node_t *head) {
    if (head == NULL) {
        return NULL;
    }

    node_t *largest = head;
    node_t *current = head;

    while (current != NULL) {
        if (current->price > largest->price) {
            largest = current;
        }
        current = current->next;
    }

    return largest;
}

// 노드를 연결 리스트에서 제거하는 함수
void remove_node(node_t **head, node_t *node) {
    if (*head == NULL || node == NULL) {
        return;
    }

    if (*head == node) {
        *head = node->next; // 헤드 노드를 제거
    } else {
        node_t *current = *head;
        while (current->next != NULL && current->next != node) {
            current = current->next;
        }
        if (current->next == node) {
            current->next = node->next; // 노드 제거
        }
    }
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

    for (int i = 0; i < n; i++) {
        node_t *largest = find_largest(head);
        if (largest != NULL) {
            printf("%s %d\n", largest->name, largest->price);
            remove_node(&head, largest);
            free(largest);
        }
    }

    return 0;
}
