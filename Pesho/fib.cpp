#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    if(n < 3){
        cout << 1 % m;
        return 0;
    }
    vector<int> f = {1,1};
    for(int i = 2; i < n; i++){
        f.push_back((f[f.size()-2] + f[f.size()-1]) % m);
        if(1 == f[f.size()-2] && 1 == f[f.size()-1]){
            f.pop_back();
            f.pop_back();
            int k = n % f.size();
            if(k == 0){
                k = f.size();
            }
            cout << f[k-1];
            return 0;
        }
    }
    cout << f[f.size()-1];

    return 0;
}
