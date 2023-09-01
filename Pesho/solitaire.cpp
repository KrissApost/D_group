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
    int k = 2 * n - 2, ma = 0;
    for(int i = 0; i < pow(2,k); i++){
        int r = i, s = m[n-1][0], x = n-1, y = 0;
        for(int j = 0; j < k; j++){
            if(r%2 == 0){
                if(y == n - 1){
                    continue;
                }
                y++;
            }else{
                if(x == 0){
                    continue;
                }
                x--;
            }
//            cout << x << " " << y << endl;
            r /= 2;
            s += m[x][y];
        }
        if(s > ma){
            ma = s;
        }
//        cout << endl;
    }
    cout << ma;

    return 0;
}
