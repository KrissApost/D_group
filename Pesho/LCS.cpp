#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.size();
    int n = s2.size();
    int t[m + 1][n + 1];
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            if(i == 0 || j == 0){
                t[i][j] = 0;
                continue;
            }
            if(s1[i - 1] == s2[j - 1]){
                t[i][j] = t[i - 1][j - 1] + 1;
                continue;
            }
            t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }
    cout << t[m][n];

    return 0;
}
