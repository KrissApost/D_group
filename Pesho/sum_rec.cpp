#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long n;
vector<int> v;
long long rec(long long k){
    k--;
    if(k == 0) return v[0];
    int j = rec(k);
    return v[k] + j;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    cout << rec(n);

    return 0;
}
