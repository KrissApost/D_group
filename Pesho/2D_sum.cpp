#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int mat[n+2][m+2];
    for(int i = 0; i <= n+1; i++){
        for(int j = 0; j <= m+1; j++){
            mat[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> mat[i][j];
        }
    }
    int s[n+2][m+2];
    for(int i = 0; i <= n+1; i++){
        for(int j = 0; j <= m+1; j++){
            s[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            s[i-1][j-1] = mat[i][j+1] + mat[i][j-1] + mat[i+1][j] + mat[i-1][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << s[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

