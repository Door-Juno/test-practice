#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 노드 구조체 정의
typedef struct _node {
    char *name;
    int price;
    struct _node *next;
} node_t;

// 노드 생성 함수
node_t *create_node(char *name, int price) {
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    new_node->name = (char *)malloc(strlen(name) + 1);
    strcpy(new_node->name, name);
    new_node->price = price;
    new_node->next = NULL;
    return new_node;
}

// 노드 연결 함수
void append_node(node_t **head, node_t *new_node) {
    if (*head == NULL) {
        *head = new_node;
    } else {
        node_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

// 버블 정렬 함수
void bubblesort(int n, node_t *head) {
    for (int i = 0; i < n - 1; i++) {
        node_t *ptr1 = head;
        node_t *ptr2 = head->next;
        for (int j = 0; j < n - i - 1; j++) {
            if (ptr1->price < ptr2->price) { // 내림차순 정렬
                // 값 교환
                char *temp_name = ptr1->name;
                int temp_price = ptr1->price;

                ptr1->name = ptr2->name;
                ptr1->price = ptr2->price;

                ptr2->name = temp_name;
                ptr2->price = temp_price;
            }
            ptr1 = ptr2;
            ptr2 = ptr2->next;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char str[20];
    int price;
    node_t *head = NULL;

    for (int i = 0; i < n; i++) {
        scanf("%s %d", str, &price);
        node_t *new_node = create_node(str, price);
        append_node(&head, new_node);
    }

    bubblesort(n, head);

    node_t *current = head;
    while (current != NULL) {
        printf("%s %d\n", current->name, current->price);
        current = current->next;
    }

    // 메모리 해제
    current = head;
    while (current != NULL) {
        node_t *temp = current;
        current = current->next;
        free(temp->name);
        free(temp);
    }

    return 0;
}
