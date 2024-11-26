#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node 구조체 정의
typedef struct _node {
    char name[20];
    int price;
    struct _node *next;
} node_t;

node_t *head = NULL; // 헤드를 전역변수로 설정하였다.

// 노드 생성 함수
node_t *create_node(char *name, int price) {
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    strcpy(new_node->name, name);
    new_node->price = price;
    new_node->next = NULL;
    return new_node;
}

// 연결 리스트에 노드 추가 함수
void append_node(node_t *node) {
    if (head == NULL) {
        head = node;
    } else {
        node_t *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = node;
    }
}

// 가장 비싼 과일 찾기 함수
node_t *find_largest() {
    if (head == NULL) {
        return NULL; // 리스트가 비어있을 경우 NULL 반환
    }
    node_t *current = head;
    node_t *largest = head;

    while (current != NULL) {
        if (current->price > largest->price) {
            largest = current;
        }
        current = current->next;
    }
    return largest;
}

int main() {
    int n;
    scanf("%d", &n);

    char str[20];
    int price;

    for (int i = 0; i < n; i++) {
        scanf("%s %d", str, &price);
        node_t *ptr = create_node(str, price);
        append_node(ptr);
    }

    node_t *largest = find_largest();
    if (largest != NULL) {
        printf("%s %d\n", largest->name, largest->price);
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
