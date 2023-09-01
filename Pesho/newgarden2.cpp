#include <bits/stdc++.h>
using namespace std;
int mat[200][200];
int mat2[200][200];
int n, m, ma, l, k = 1;

static void print(){
    cout << endl;
    for(int i1 = 0; i1 < n; i1++){
        for(int i2 = 0; i2 < m; i2++) cout << mat[i1][i2] << " ";
        cout << endl;
    }
}

void rek(int r, int c){
    if(r < 0 || c < 0 || r >= n || c >= m || mat[r][c] == 1 || mat2[r][c] != 0) return;
    mat2[r][c] = k;
    k++;
    mat[r][c] = 1;
    rek(r-1, c);
    rek(r, c-1);
    rek(r+1, c);
    rek(r, c+1);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int r = 0; r < n; r++){
        for(int c = 0; c < m; c++){
            cin >> mat[r][c];
        }
    }

    for(int r = 0; r < n; r++){
        for(int c = 0; c < m; c++){
            if(!mat[r][c]){
                rek(r,c);
                k = 1;
//                print();
            }
        }
    }
    for(int r = 0; r < n; r++){
        for(int c = 0; c < m; c++){
            if(ma < mat2[r][c]) {
                ma = mat2[r][c];
                l = 0;
            }
            if(ma == mat2[r][c]) l++;
        }
    }
    cout << ma << " " << l;
    return 0;
}
