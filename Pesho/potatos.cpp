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
    t2[0][0] = t[0][0];
    for(long long i = 1; i < n; i++) t2[i][0] = t2[i-1][0] + t[i][0];
    for(long long i = 1; i < m; i++) t2[0][i] = t2[0][i-1] + t[0][i];

    for(long long i = 1; i < n; i++){
        for(long long j = 1; j < m; j++){
            t2[i][j] = max(t2[i-1][j],t2[i][j-1]) + t[i][j];
        }
    }
    cout << t2[n-1][m-1];

    return 0;
}
