#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int t[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> t[i][j];
        }
    }
    int t2[n+1][n+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            t2[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            t2[i][j] = t2[i][j-1] + t2[i-1][j] - t2[i-1][j-1] + t[i][j];
        }
    }
    int ans = 0;
    for(int i1 = 1; i1 <= n; i1++){
        for(int j1 = 1; j1 <= n; j1++){
            for(int i2 = i1; i2 <= n; i2++){
                for(int j2 = j1; j2 <= n; j2++){
                    if(t2[i2][j2] - t2[i1-1][j2] - t2[i2][j1-1] + t2[i1-1][j1-1] == 0){
                        if((i2 - i1 + 1) * (j2 - j1 + 1) > ans){
                            ans = (i2 - i1 + 1) * (j2 - j1 + 1);
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
