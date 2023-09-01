#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long t[1500][1500];
long long t2[1500][1500];
long long n, m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            cin >> t[i][j];
        }
    }
    for(long long i = 0; i < n; i++){
        t2[i][0] = t[i][0];
    }
    for(long long i = 1; i < m; i++){
        for(long long j = 0; j < n; j++){
            if(j == 0){
                t2[j][i] = min(t2[j][i-1],t2[j+1][i-1]) + t[j][i];
                continue;
            }
            if(j == n - 1){
                t2[j][i] = min(t2[j][i-1],t2[j-1][i-1]) + t[j][i];
                continue;
            }
            t2[j][i] = min(t2[j-1][i-1],min(t2[j+1][i-1],t2[j][i-1])) + t[j][i];
        }
    }
    long long mi = 1000000;
    for(int i = 0; i < n; i++){
        mi = min(mi,t2[i][m-1]);
    }
    cout << mi;

    return 0;
}

