#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int,int>> vec;
    int x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        vec.push_back({y,x});
    }
    sort(vec.begin(), vec.end());
    long long m = 0, s = 0;
    for(int i = 0; i < n-1; i++){
        if(vec[i].first == vec[i+1].first){
            s += vec[i].second;
        }else{
            if(s+vec[i].second > m) m = s+vec[i].second;
            s = 0;
        }
    }
    if(s + vec[n-1].second > m) m = s+vec[n-1].second;
    cout << m;

    return 0;
}
