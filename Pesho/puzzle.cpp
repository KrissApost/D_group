#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    map<string,pair<int,int>> br;
    int a;
    for(int i = 0; i < n; i++){
        queue<int> q;
        for(int j = 0; j < m; j++){
            cin >> a;
            q.push(a);
        }
        string s;
        for(int y = 0; y < m; y++){
            queue<int> q2 = q;
            for(int j = 0; j < m; j++){
                s += '0' + q2.front();
                q2.pop();
            }
            q.push(q.front());
            q.pop();
            br[s].first++;
            br[s].second+=y;
            s = "";
        }
    }
    int ma = 1000000;
    for(auto p: br){
        if(p.second.first >= n){
            if(p.second.second < ma){
                ma = p.second.second;
            }
        }
    }
    if(ma != 1000000){
        cout << ma;
    }else{
        cout << -1;
    }

    return 0;
}
