#include <bits/stdc++.h>
using namespace std;
char mat[1000][1000];
int n, m, ma = 0, r = 10000000;

void rek(int x, int y, int k, int j){
    if(x < 0 || y < 0 || x >= n || y >= m || mat[x][y] == 'x') return;
    k++;
    if (k > ma) return;
    char old = mat[x][y];
    if (mat[x][y] == 'T'){
        if (ma >= k) {
           ma = k;
           if (r <= j) r = j;
        }
        return;
    }
    if (mat[x][y] == '+') j++;
    mat[x][y] = 'x';
    rek(x-1,y,k, j);
    rek(x,y-1,k, j);
    rek(x+1, y,k, j);
    rek(x, y+1, k, j);
    mat[x][y] = old;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x = 0, y = 0;
    cin >> n >> m;
    for(int i1 = 0; i1 < n; i1++){
        for(int i2 = 0; i2 < m; i2++){
            cin >> mat[i1][i2];
            if(mat[i1][i2] == 'S'){
                x = i1;
                y = i2;
            }
        }
    }
    rek(x, y, -1, 0);
    cout << ma << " " << r;
    return 0;
}
