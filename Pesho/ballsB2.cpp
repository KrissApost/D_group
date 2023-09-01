#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    map<int,int> visited;
    map<int,vector<int>> g;
    for (int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        if(x > n || y > n){
            continue;
        }
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int k = 0;
    for(auto v: g){
        int i = v.first;
        //cout << i << endl;
        if(visited[i] == 0){
            //cout << "v: " << i << " " << k << endl;
            k++;
        }
        for(int y = 0; y < g[i].size(); y++){
            visited[g[i][y]] = k;
            //cout << " - " << i << " " << g[i][y] << " " << k << endl;
        }
    }
    cout << k + n - visited.size();

    return 0;
}
