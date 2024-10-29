#include <stdio.h>

int main() {
    char ch = getchar(); // char = 8비트 
    int cnt = 0;
    cnt += (ch & (1 << 0)) != 0; // 비트 1을 ch비트의 오른쪽으로 0번 이동한후, 0과 다르다면 ( = 1이라면 ) cnt에 1을 더한다.
    cnt += (ch & (1 << 1)) != 0; 
    cnt += (ch & (1 << 2)) != 0;
    cnt += (ch & (1 << 3)) != 0;
    cnt += (ch & (1 << 4)) != 0;
    cnt += (ch & (1 << 5)) != 0;
    cnt += (ch & (1 << 6)) != 0;
    cnt += (ch & (1 << 7)) != 0; // char은 8비트이므로 0~7번 움직일 수 있다.
    printf("%d\n",ch);
    printf("0x%x\n",ch);
    printf("%d\n",cnt);
}
