#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin >> n >> k;
    long long s = 1;
    for(long long i = 1; i < k; i++){
        s = s * (n - i) / i;
    }
    cout << s;

    return 0;
}
