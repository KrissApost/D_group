#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, a, b;
    cin >> a >> b >> n;
    long long s = 0, e;
    for(int i = 0; i < n; i++){
        cin >> e;
        s += (e - a + 1) / 2 + (e - a + 1) % 2;
        a = e + 1;
    }
    s += (b - a) / 2 + (b - a) % 2;
    cout << s;

    return 0;
}

