#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> matrix_t;

void read_matrix(matrix_t &pmat);
void add(matrix_t a, matrix_t b, matrix_t &c);

int main(){
    int n,m;
    cin >> n >> m;
    matrix_t a(n,vector<int>(m));
    matrix_t b(n,vector<int>(m));
    matrix_t c(n,vector<int>(m));

    for(int i = 0 ; i < a.size(); i++){
        for(int j = 0; j < a[0].size();j++){
            cin >> a[i][j];
        }
    }
    read_matrix(b);
    add(a,b,c);

    for(int i = 0 ; i < c.size(); i++){
        for(int j = 0; j < c[0].size();j++){
            cout << c[i][j];
            if(j < (m-1)){
                cout << " ";
            }
        }
         cout << "\n";
    }
}

void read_matrix(matrix_t &pmat){
    for(int i = 0 ; i < pmat.size(); i++){
        for(int j = 0 ; j < pmat[0].size(); j++){
            cin >> pmat[i][j];
        }
    }
}

void add(matrix_t a, matrix_t b, matrix_t &c){
    for(int i = 0 ; i < a.size(); i++){
        for(int j = 0 ; j < a[0].size() ; j ++){
            c[i][j] = a[i][j]+ b[i][j];
        }
    }
}