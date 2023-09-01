#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int m[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }
    k = k % 4;
    int m2[n][n];
    for(int i = 0; i < k; i++){
        if(i % 2 == 0){
            for(int y = 0; y < n; y++){
                for(int j = 0; j < n; j++){
                    m2[j][(n-1)-y] = m[y][j];
                }
            }
        }else{
            for(int y = 0; y < n; y++){
                for(int j = 0; j < n; j++){
                    m[j][(n-1)-y] = m2[y][j];
                }
            }
        }
    }
    if(k % 2 != 0){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << m2[i][j] << " ";
            }
            cout << endl;
        }
    }else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

