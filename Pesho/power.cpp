#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long m;
long long rec(long long a, long long b){
    long long p = 1;
    while(b != 0){
        p = (p % m) * (a % m) % m;
        b--;
    }
    return p % m;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n >> m;
    int a;
    int k = 2;
    long long s = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        s += rec(a,k) % m;
        k++;
    }
    cout << s % m;

    return 0;
}
