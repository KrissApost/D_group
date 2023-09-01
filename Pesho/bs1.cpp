#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int bs(int x, vector<int>& v){
    int l = 0, r = v.size()-1, ans = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(x == v[m]){
            ans = m;
            r = m-1;
        }
        if(x < v[m]){
            r = m-1;
        }
        if(x > v[m]){
            l = m+1;
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
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int z;
    for(int i = 0; i < q; i++){
        cin >> z;
        cout << bs(z,v) << endl;
    }

    return 0;
}
