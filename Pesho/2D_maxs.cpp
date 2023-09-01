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
    int ma = 0, k = 0;
    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = 0; j < m; j++){
            s += mat[i][j];
        }
        if(s > ma){
            ma = s;
        }
    }

    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = 0; j < m; j++){
            s += mat[i][j];
        }
        if(s == ma){
            ma = s;
            k++;
        }
    }
    if(k > 1){
        cout << k;
    }else{
        cout << ma;
    }

    return 0;
}

