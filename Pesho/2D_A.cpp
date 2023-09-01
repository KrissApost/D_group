#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int m = 2 * n - 1;
    bool mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            mat[i][j] = 0;
        }
    }
    int x = 0, y = n-1;
    while(x < n && y >= 0){
        mat[x][y] = true;
        x++;
        y--;
    }
    x = 0;
    y = n-1;
    while(x < n && y < m){
        mat[x][y] = true;
        x++;
        y++;
    }
    int k1 = -1, k2 = -1;
    for(int i = 0; i < m; i++){
        if(mat[(n+1)/2-1][i] == true && k1 == -1){
            k1 = i;
            continue;
        }
        if(mat[(n+1)/2-1][i] == true && k1 != -1){
            k2 = i;
            break;
        }
    }
    for(int i = k1+1; i < k2; i++){
        mat[(n+1)/2-1][i] = true;
    }
    int br = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] || mat[n-i-1][j]){
//                cout << mat[i][j] << " " << mat[n-i-1][j] << endl;
                br++;
            }
        }
    }
    cout << br;

    return 0;
}

