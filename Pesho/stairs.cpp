#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
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
    vector<pair<int,int>> s;
    for(int i = 0; i < n-1; i++){
        for(int y = i + 1; y < n; y++){
            if(v[i] == v[y]){
                s.push_back({i,y});
                break;
            }
            if(v[i] < v[y]){
                break;
            }
        }
    }
    if(q == 1){
        cout << s.size();
    }else{
        int k = 0;
        for(int i = 0; i < s.size()-1; i++){
            for(int y = i+1; y < s.size(); y++){
                if(s[y].first < s[i].second){
                    k++;
                    break;
                }
                if(s[y].first > s[i].second){
                    break;
                }
            }
        }
        cout << k;
    }

    return 0;
}
