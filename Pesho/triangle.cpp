#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a, b;
    cin >> a >> b;
    long long c = max(b - a,a - b), k = a + b - c - 1;
    cout << k;

    return 0;
}
