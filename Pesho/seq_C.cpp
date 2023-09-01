#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    int m = 0, r = 0;
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    int k = 0;
    for(int i = 1; i < n; i++) k+=v[i]-v[0];
    cout << k;

    return 0;
}
