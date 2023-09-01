#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    bool line[m*n];
    bool matrix[n][m];
    for (int i1 = 0; i1 < n; i1++){
        for (int i2 = 0; i2 < m; i2++){
            cin >> matrix[i1][i2];
        }
    }
    char D = 'R';
    int p = 0, ss = 0, M = 0, N = 0, posi = m - 1;
    while (p < n*m) {
        line[p] = matrix[N][M];
        p++;
        if (posi == 0){
            if (D == 'R') {
                D = 'D';
                ss++;
                posi = n - ss;
            }
            else if (D == 'D') {
                D = 'L';
                posi = m - ss;
            }
            else if (D == 'L') {
                D = 'U';
                ss++;
                posi = n - ss;
            }
            else if (D == 'U') {
                D = 'R';
                posi = m - ss;
            }
        }
        if (D == 'R') M++;
        if (D == 'D') N++;
        if (D == 'L') M--;
        if (D == 'U') N--;
        posi--;
    }
    int l = 0, i = 0, T = n*m;
    while(i != T - 1){
        l++;
        int s = min(i + k, T-1);
        while(s >= i){
            if(!line[s]) break;
            s--;
        }
        if (s == i){
            cout << -1;
            return 0;
        }
        i = s;
    }
    int arr[T+1] = {};
    for (int i1 = T-1; i1 >= 0; i1--){
        arr[i1] = arr[i1+1];
        if(!line[i1]){
            arr[i1]++;
        }
    }
    int maxF = 0;
    for (int i1 = 0; i1 < T-k; i1++){
        if (maxF < arr[i1] - arr[i1 + k]) maxF = arr[i1] - arr[i1 + k];
    }
    cout << l << " " << maxF;
    return 0;
}
