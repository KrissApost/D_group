#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    vector<pair<int,int>> v;
    while(cin >> a >> b){
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),cmp);
    long long k = 0, s = 0;
    int j = 0;
    for(int i = 0; i < v.size(); i++){
        int a = v[i].first, b = v[i].second;
        if(j >= a){
            k = k + j - a;
            j += b;
        }else{
            s = s + a - j;
            j = a + b;
        }
    }
    cout << s + max(0,720 - j) << " " << k;

    return 0;
}
