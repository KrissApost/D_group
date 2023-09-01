#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    bool mat[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            mat[i][j] = 0;
        }
    }
    char c;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> c;
            if(c == '*'){
                mat[i][j] = 1;
            }
        }
    }
    unsigned short int arr[n+1][m+1];
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

    int ma = 0;
    int p;
    int ps1, ps2;
    for(unsigned char x1 = 1; x1 + 2 <= n; x1++){
        for(unsigned char y1 = 1; y1 + 2 <= m; y1++){
            if(mat[x1][y1] == 0){
                continue;
            }
            bool f = true;
            for(unsigned char x2 = x1 + 2; x2 <= n; x2++){
                p = (x2 - x1 + 1) * 2;
                ps1 = arr[x2][y1] - arr[x1-1][y1] - arr[x2][y1-1] + arr[x1-1][y1-1];
                if(ps1 != x2 - x1 + 1){
                    break;
                }
                for(unsigned char y2 = y1 + 2; y2 <= m; y2++){
                    ps1 = arr[x1][y2] - arr[x1-1][y2] - arr[x1][y1-1] + arr[x1-1][y1-1];
                    if(ps1 != y2 - y1 + 1){
                        f = false;
                        break;
                    }
                    ps1 = arr[x2][y2] - arr[x2-1][y2] - arr[x2][y1-1] + arr[x2-1][y1-1];
                    if(ps1 != y2 - y1 + 1){
                        break;
                    }
                    p += 2;
                    ps1 = arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1];
                    ps2 = arr[x2-1][y2-1] - arr[x1][y2-1] - arr[x2-1][y1] + arr[x1][y1];
//                    cout << x1 << " " << y1 << " " << x2 << " " << y2 << " : " << ps1  << " - " << ps2 << " = " << p << endl;
                    if(ps1 - ps2 == p){
                        ma++;
                    }
                }
                if(!f){
                    break;
                }
            }
            if(!f){
                break;
            }
        }
    }
    cout << ma;

    return 0;
}
