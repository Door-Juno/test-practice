#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long long_t;

typedef struct _node {
    long_t num;
    struct _node *next;
} node_t;

typedef node_t *node_ptr;

// 콜라츠 수열을 생성하여 연결 리스트 반환
node_ptr collatz(long_t n) {
    node_ptr head = NULL, tail = NULL;

    while (n != 1) {
        // 새 노드 생성
        node_ptr new_node = (node_ptr)malloc(sizeof(node_t));
        new_node->num = n;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node; // 첫 노드 설정
        } else {
            tail->next = new_node; // 리스트 끝에 추가
        }
        tail = new_node; // tail 업데이트

        // 콜라츠 계산
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }

    // 마지막 노드 (1) 추가
    node_ptr new_node = (node_ptr)malloc(sizeof(node_t));
    new_node->num = 1;
    new_node->next = NULL;
    if (tail != NULL) {
        tail->next = new_node;
    } else {
        head = new_node;
    }

    return head;
}

// 연결 리스트 메모리 해제
void clean(node_ptr head) {
    node_ptr current = head;
    while (current != NULL) {
        node_ptr temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        long_t m;
        scanf("%lld", &m);

        // 콜라츠 수열 생성
        node_ptr head = collatz(m);

        // 콜라츠 수열 출력
        for (node_ptr t = head; t != NULL; t = t->next) {
            printf("%lld ", t->num);
        }
        printf("\n");

        // 메모리 정리
        clean(head);
    }

    printf("finished\n");
    return 0;
}
