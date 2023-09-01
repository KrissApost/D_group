#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    int mat[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            mat[i][j] = 0;
        }
    }
    long long s = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> mat[i][j];
            s += mat[i][j];
        }
    }
    long long arr[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            arr[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            arr[i][j] = arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1] + mat[i][j];
        }
    }

    long long ma = 0;
    for(int x1 = 1; x1 + k - 1 <= n; x1++){
        for(int y1 = 1; y1 + k - 1 <= m; y1++){
            int x2 = x1 + k - 1, y2 = y1 + k - 1;
            long long ps = arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1];
//            cout << x1 << " " << y1 << " " << x2 << " " << y2 << " - " << ps << endl;
            if(ps > ma){
                ma = ps;
            }
        }
    }

    cout << s - ma;

    return 0;
}
