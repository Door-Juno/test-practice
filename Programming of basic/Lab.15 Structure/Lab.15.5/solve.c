#include <stdio.h>

typedef struct  _coord coord_t;
struct _coord{
    int x ;
    int y ;
};

int farpoints(int n , coord_t *p , coord_t **r, coord_t **s );

int main() {
    int n ;
    scanf("%d", &n);
    coord_t point[100];
    for(int i = 0 ; i < n ; i++){
        scanf("%d %d", &point[i].x, &point[i].y);
    }
    coord_t *u, *v;
    int sqrdist = farpoints(n, point, &u, &v);
    printf("sqrt(%d)\n", sqrdist);
    printf("%d %d\n", u->x, u->y);
    printf("%d %d\n", v->x, v->y);
}

int farpoints(int n , coord_t *p , coord_t **r, coord_t **s ){
    int max = 0; // 거리의 제곱값의 최대
    int cnt = 0; // 현재 거리의 제곱. (x좌표 차이의 제곱) + (y좌표 차이의 제곱)
    coord_t cur = {0,0}; // loop내에서 index가 지시하고 있는 좌표들의 거리..?
    for(int i = 0 ; i < n-1 ; i++){ // n의 범위 .. ? 1.2 , 1.3, 1.4, 1.5 / 2.3, 2.4, 2.5/ 3.4, 3.5 / 4.5
    // 즉 i 는 n-1 까지, j는 n까지 ..? 
        for(int j = i+1 ; j < n ; j ++){
            cur.x = (p[i].x - p[j].x) * (p[i].x - p[j].x);
            cur.y = (p[i].y - p[j].y) * (p[i].y - p[j].y);
            cnt = cur.x + cur.y;
            if(max < cnt){
                max = cnt ; 
                *r = &p[i];
                *s = &p[j];
            }
        }
    }
    return max ;
}