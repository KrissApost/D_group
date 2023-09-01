#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int,int>> v(n+1);
    for(int i = 0;i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    v[n].first = 1000000;
    v[n].second = 1000000;
    sort(v.begin(), v.end());
    int b = v[0].first;
    int e = v[0].second;
    int k = 0, m = 0;
    for(int i = 1; i <= n; i++){
        if(e < v[i].first){
            if(m < e - b) m = e - b;
            b = v[i].first;
            e = v[i].second;
            k++;
        }else{
            e = max(e, v[i].second);
        }
    }
    cout << k << " " << m;
    return 0;
}
