#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // usleep()
#include <termios.h> // 터미널 입력 처리
#include <fcntl.h> // 파일 상태 플래그 제어

#define WIDTH 20
#define HEIGHT 15

char board[HEIGHT][WIDTH];
int paddle_pos = WIDTH / 2; // 패들의 초기 위치
int ball_x = WIDTH / 2, ball_y = HEIGHT - 3; // 공의 초기 위치
int ball_dx = 1, ball_dy = -1; // 공의 이동 방향
int bricks[HEIGHT][WIDTH]; // 벽돌 상태 (1: 존재, 0: 없음)

// 터미널을 비차단 입력 모드로 설정
void enable_nonblocking_input() {
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag &= ~(ICANON | ECHO); // Canonical 모드 및 에코 비활성화
    tcsetattr(STDIN_FILENO, TCSANOW, &t);

    fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) | O_NONBLOCK); // 비차단 모드 설정
}

// 터미널 입력 복구
void restore_terminal_settings() {
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag |= ICANON | ECHO; // Canonical 모드 및 에코 활성화
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

// 게임판 초기화
void initialize_game() {
    // 벽돌 초기화
    for (int i = 0; i < 5; i++) { // 상단 5줄을 벽돌로 채움
        for (int j = 0; j < WIDTH; j++) {
            bricks[i][j] = 1;
        }
    }

    // 게임판 초기화
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == HEIGHT - 1 && (j >= paddle_pos - 2 && j <= paddle_pos + 2)) {
                board[i][j] = '='; // 패들
            } else if (i == ball_y && j == ball_x) {
                board[i][j] = 'O'; // 공
            } else if (bricks[i][j]) {
                board[i][j] = '#'; // 벽돌
            } else {
                board[i][j] = ' '; // 빈 공간
            }
        }
    }
}

// 게임판 출력
void print_board() {
    system("clear"); // 콘솔 화면 지우기
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

// 입력 처리
void handle_input() {
    char input = getchar(); // 입력 확인
    if (input == 'a' && paddle_pos > 2) {
        paddle_pos--; // 왼쪽 이동
    } else if (input == 'd' && paddle_pos < WIDTH - 3) {
        paddle_pos++; // 오른쪽 이동
    }
}

// 공 이동 및 충돌 처리
void update_ball() {
    // 공 이동
    ball_x += ball_dx;
    ball_y += ball_dy;

    // 좌우 벽 충돌
    if (ball_x <= 0 || ball_x >= WIDTH - 1) {
        ball_dx *= -1;
    }

    // 천장 충돌
    if (ball_y <= 0) {
        ball_dy *= -1;
    }

    // 바닥 충돌 (게임 오버)
    if (ball_y >= HEIGHT - 1) {
        printf("Game Over!\n");
        restore_terminal_settings(); // 터미널 설정 복구
        exit(0);
    }

    // 패들과 충돌
    if (ball_y == HEIGHT - 2 && (ball_x >= paddle_pos - 2 && ball_x <= paddle_pos + 2)) {
        ball_dy *= -1; // 방향 반전
    }

    // 벽돌과 충돌
    if (bricks[ball_y][ball_x]) {
        bricks[ball_y][ball_x] = 0; // 벽돌 제거
        ball_dy *= -1; // 방향 반전
    }
}

// 게임판 업데이트
void update_board() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == HEIGHT - 1 && (j >= paddle_pos - 2 && j <= paddle_pos + 2)) {
                board[i][j] = '='; // 패들
            } else if (i == ball_y && j == ball_x) {
                board[i][j] = 'O'; // 공
            } else if (bricks[i][j]) {
                board[i][j] = '#'; // 벽돌
            } else {
                board[i][j] = ' '; // 빈 공간
            }
        }
    }
}

int main() {
    initialize_game();
    enable_nonblocking_input(); // 비차단 입력 설정

    while (1) {
        handle_input(); // 사용자 입력 처리
        update_ball(); // 공 이동 및 충돌 처리
        update_board(); // 게임판 업데이트
        print_board(); // 게임판 출력
        usleep(100000); // 게임 속도 조절 (0.05초 대기)
    }

    restore_terminal_settings(); // 종료 시 터미널 설정 복구
    return 0;
}
