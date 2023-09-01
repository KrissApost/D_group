#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long a, b, m;
long long rek(long long a, long long b){
    if(b == 0) return 1;
    if(b % 2 == 0){
        int k = rek(a, b/2);
        return (k % m) * (k % m) % m;
    }
    return (a % m) * (rek(a, b-1) % m) % m;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> m;
    cout << rek(a,b) % m;

    return 0;
}
