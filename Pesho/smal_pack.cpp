#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, w;
    cin >> n >> w;
    vector<int> s(n);
    vector<int> t(n);
    for(int i = 0; i < n; i++) cin >> t[i] >> s[i];
    int m = 0;
    for(int i = 0; i < pow(2,n); i++){
        int t2[2] = {};
        int a[2] = {};
        int x = i;
        for(int j = 0; j < n; j++){
            t2[x%2] += t[j];
            a[x%2] += s[j];
            x /= 2;
        }
        if(t2[0] <= w){
            m = max(m,a[0]);
        }
    }
    cout << m;

    return 0;
}
