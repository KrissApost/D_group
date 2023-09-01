#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    int mi = 100, x = 0, y = m - 1;
    while(x < n && y >= 0){
        if(mi > mat[x][y]){
            mi = mat[x][y];
        }
        x++;
        y--;
    }
    cout << mi;

    return 0;
}

