#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
const int KK = 1000000007;
long long t[2001][2001];
int n;
long long Solve(int n){
    long long i, j;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if(1 == j){
                t[i][j] = 1;
                continue;
            }
            if(1 == i){
                t[i][j] = 1;
                continue;
            }
            if(i < j){
                t[i][j] = t[i][i];
                continue;
            }
            if(i == j){
                t[i][j] = 1 + t[i][i - 1];
                continue;
            }
            t[i][j] = (t[i][j - 1] + t[i - j][j]) % KK;
        }
    }
    return t[n][n] % KK;
}

int main(){
    cin >> n;
    cout << Solve(n);
    return 0;
}

