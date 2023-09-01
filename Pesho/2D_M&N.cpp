#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, m, k;
    cin >> n >> m >> k;
    k--;
    cout << k/m+1 << " " << k%m+1;

    return 0;
}

