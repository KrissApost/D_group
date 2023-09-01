#include <bits/stdc++.h>
using namespace std;
map<int,int> visited;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    map<int,vector<int>> g;
    for (int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    int k = 1;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto x: g[node]){
            if (visited[x] == 0){
                q.push(x);
                k++;
                visited[x] = k;
                cout << node << " " << x << endl;
            }
        }
    }
    cout << k;

    return 0;
}
