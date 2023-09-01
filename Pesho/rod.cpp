#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    long long s = 0;
    while(v.size() > 1){
        int m = 1000000, r = 0;
        for(int i = 0; i < v.size() - 1; i++){
            if(v[i] + v[i+1] < m){
                m = v[i] + v[i+1];
                r = i;
            }
        }
        v[r] += v[r+1];
        s+=v[r];
        v.erase(v.begin() + r + 1);
    }
    cout << s << endl;
    return 0;
}
