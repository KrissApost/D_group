#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int mod = 1000000007;
int t[102][10002];
int main(){
    int n, m;
    cin >> n >> m;
    char c;
    for(int i = 1; i <= n; i++){
        for(int y = 1; y <= m; y++){
            cin >> c;
            if(c == '#') t[i][y] = -1;
        }
    }
    t[1][1] = 1;
    for(int y = 1; y <= m; y++){
        for(int i = 1; i <= n; i++){
            if((i == 1 && y == 1) || t[i][y] == -1){
                continue;
            }
            if(t[i][y-1] != -1){
                t[i][y] = (t[i][y] + t[i][y-1]) % mod;
            }
            if(t[i-1][y-1] != -1){
                t[i][y] = (t[i][y] + t[i-1][y-1]) % mod;
            }
            if(t[i+1][y-1] != -1){
                t[i][y] = (t[i][y] + t[i+1][y-1]) % mod;
            }
        }
    }
    cout << t[n][m] % mod;

    return 0;
}
