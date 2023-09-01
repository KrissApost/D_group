#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a, b;
    cin >> a >> b;
    if(a < b) swap(a,b);
    long long k = 0;
    while(b != 0){
        k += a / b;
        long long r = a % b;
        a = b;
        b = r;
    }
    cout << k;

    return 0;
}
