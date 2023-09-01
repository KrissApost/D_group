#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int m[n][n];
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        int ma = 0;
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
            if(m[i][j] > ma){
                arr[i] = j;
                ma = m[i][j];
            }
        }
    }
    int s = n * n, O = 0, R = 0;
    for(int i = 0; i < s; i++){
        int mm = 1000, r;
        for(int j = 0; j < n; j++){
            if(m[j][arr[j]] != 0 && m[j][arr[j]] < mm){
                mm = m[j][arr[j]];
                r = j;
            }
        }
        if(i%2 == 0){
            R += m[r][arr[r]];
//            cout << "R += " << m[r][arr[r]] << endl;
        }else{
            O += m[r][arr[r]];
//            cout << "O += " << m[r][arr[r]] << endl;
        }
        m[r][arr[r]] = 0;
        arr[r] = 0;
        int ma = 0;
        for(int j = 0; j < n; j++){
            if(m[r][j] > ma){
                arr[r] = j;
                ma = m[r][j];
            }
        }
    }
    cout << O << " " << R;

    return 0;
}
