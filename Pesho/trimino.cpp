#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> k;
    for(int k1 = 0; k1 < k; k1++){
        bool f = true;
        int n, m;
        cin >> n >> m;
        int mat[n+1][m+1];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> mat[i][j];
            }
        }
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(mat[i][j] != 0){
                    if(!(i + 2 <= n && mat[i+1][j] == mat[i][j] && mat[i+2][j] == mat[i][j]) && !(i + 1 <= n && j + 1 <= m && mat[i+1][j] == mat[i][j] && mat[i+1][j+1] == mat[i][j])){
                        if(!(j + 2 <= m && mat[i][j+1] == mat[i][j] && mat[i][j+2] == mat[i][j]) && !(i + 1 <= n && j + 1 <= m && mat[i][j+1] == mat[i][j] && mat[i+1][j+1] == mat[i][j])){
                            f = false;
                            break;
                        }
                    }
                    if(i + 2 <= n && mat[i+1][j] == mat[i][j] && mat[i+2][j] == mat[i][j]){
                        mat[i][j] = 0;
                        mat[i+1][j] = 0;
                        mat[i+2][j] = 0;
                    }
                    if(i + 1 <= n && j + 1 <= m && mat[i+1][j] == mat[i][j] && mat[i+1][j+1] == mat[i][j]){
                        mat[i][j] = 0;
                        mat[i+1][j] = 0;
                        mat[i+1][j+1] = 0;
                    }
                    if(j + 2 <= m && mat[i][j+1] == mat[i][j] && mat[i][j+2] == mat[i][j]){
                        mat[i][j] = 0;
                        mat[i][j+1] = 0;
                        mat[i][j+2] = 0;
                    }
                    if(i + 1 <= n && j + 1 <= m && mat[i][j+1] == mat[i][j] && mat[i+1][j+1] == mat[i][j]){
                        mat[i][j+1] = 0;
                        mat[i+1][j+1] = 0;
                        mat[i][j] = 0;
                    }
                }
            }
        }
        if(f){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
