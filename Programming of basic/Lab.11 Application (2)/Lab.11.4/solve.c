#include <stdio.h>
#define MAX 1000

int cnt;

void swap(int a[],int i, int j);

void bubblesort(int n, int a[]);

int scan(int n , int a[]);

int comp(int n, int a[], int b[]);

int main(){
    int n, t, m, a[MAX], b[MAX], cnt = 0;
    scanf("%d",&n);
    int len = scanf(n,a);
    bubblesort(len,a);
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        scanf("%d",&m);
        int lenm = scan(m,b);
        bubblesort(lenm,n);
        if(len == lenm && comp(len,a,b))
            cnt++;
    }
    printf("%d",cnt);
}

void bubblesort(int n, int a[]){
    for(int i = 0 ; i<n-1 ; i++){
        for(int j = 0 ; j < n-1-i; j++){
            if(a[j]> a[j+1]){
                swap(a,j,j+1) ;
            }
        }
    }
}

int scan(int n , int a[]){
    int i = 0 ;
    for(;n>0;i++){
        a[i] = n % 10;
        n /= 10;
    }
    return 1;
}

int comp(int n, int a[], int b[]){
    for(int i = 0 ; i < n-1 ; i ++){
        if(a[i] != b[i]){
            return 0;
        }
        else{
            return 1;
        }
    }
}