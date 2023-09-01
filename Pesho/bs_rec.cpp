#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int n, q;
int k = 0;
vector<int> v;
string rec(int b, int e, int p){
    int m = (b + (e-1)) / 2;
    if(b == e){
        return "no";
    }
    if(p == v[m]){
        return "yes";
    }
    if(p < v[m]){
        return rec(b,m, p);
    }
    if(p > v[m]){
        return rec(m+1,e, p);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < q; i++){
        cin >> a;
        cout << rec(0, n, a) << endl;
    }

    return 0;
}

