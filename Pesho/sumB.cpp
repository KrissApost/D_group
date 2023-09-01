#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n], b[n];
    cin >> a[0];
    b[0] = min(0,a[0]);
    for(int i = 1; i < n; i++){
        cin >> a[i];
        a[i] += a[i-1];
        b[i] = min(b[i-1], a[i]);
    }
    int m = 0;
    for(int i = 0; i < n; i++){
//        cout << a[i] << " " << b[i] << " " << i << endl;
        m = max(a[i] - b[i], m);
    }
    cout << m;

    return 0;
}
