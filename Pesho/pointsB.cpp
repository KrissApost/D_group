#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> v(n+1);
    for(int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        v.push_back({l,-1});
        v.push_back({r,m});
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    int k = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i].second == -1){
            k++;
        }else{
            if(v[i].second == m){
                k--;
            }else{
                cout << k << endl;
            }
        }
    }

    return 0;
}
