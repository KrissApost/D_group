#include <bits/stdc++.h>
#define endl '\n';
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int m[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            string st;
            cin >> st;
            char c = st[0];
            if(isdigit(c)){
                m[i][j] = c - '0';
                continue;
            }
            if(c == 'A'){
                m[i][j] = 1;
                continue;
            }
            if(c == 'T'){
                m[i][j] = 10;
                continue;
            }
            if(c == 'J'){
                m[i][j] = 11;
                continue;
            }
            if(c == 'Q'){
                m[i][j] = 12;
                continue;
            }
            if(c == 'K'){
                m[i][j] = 13;
                continue;
            }
        }
    }
    int k = 2 * n - 2, x = n-1, y = 0, s = m[x][y];
    for(int i = 0; i < k; i++){
        if(x == 0 && y != n - 1){
            s += m[x][y+1];
            y++;
            continue;
        }
        if(y == n - 1){
            s += m[x-1][y];
            x--;
            continue;
        }
        s += max(m[x-1][y],m[x][y+1]);
        if(m[x-1][y] > m[x][y+1]){
            x--;
        }else{
            y++;
        }
    }
    cout << s;

    return 0;
}
