#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int bs(long long x, vector<long long>& v){
    int l = 0, r = v.size()-1, ans = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(x <= v[m]){
            ans = m;
            r = m-1;
            l = 0;
        }
        if(x > v[m]){
            l = m + 1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    long long a;
    cin >> a;
    arr[0] = a;
    for(int i = 1; i < n; i++){
        cin >> a;
        arr[i] = arr[i-1] + a;
    }
    for(int i = 0; i < q; i++){
        cin >> a;
        cout << bs(a, arr) + 1 << endl;
    }

    return 0;
}

