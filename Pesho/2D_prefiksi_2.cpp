#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long arr[1001][1001];
int mat[1001][1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            arr[i][j] = mat[i][j]-mat[i][j-1] - mat[i-1][j] + mat[i-1][j-1];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
