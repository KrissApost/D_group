#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k, a, b;
    cin >> n >> m >> k;
    bool t[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            t[i][j] = 0;
        }
    }
    for(int i = 0; i < k; i++){
        cin >> a >> b;
        t[a-1][b-1] = 1;
    }
    vector<pair<int,int>> p = {{-1,0},{1,0},{0,-1},{0,1}};
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!t[i][j]){
                ans++;
                t[i][j] = 1;
                vector<pair<int,int>> v = {{i,j}};
                for(int o = 0; v.size(); o++){
                    vector<pair<int,int>> next;
                    for(auto p1: v){
                        for(auto p2: p){
                            int x = p1.first + p2.first;
                            int y = p1.second + p2.second;
                            if(x < 0 || x >= n || y < 0 || y >= m){
                                continue;
                            }
                            if(t[x][y] != 0) continue;
                            next.push_back({x,y});
                            t[x][y] = 1;
                        }
                    }
                    bool f = true;
                    for(int i1 = 0; i1 < n; i1++){
                        for(int j1 = 0; j1 < m; j1++){
                            if(t[i1][j1] == 0){
                                f = false;
                                break;
                            }
                        }
                    }
                    if(f){
                        cout << ans;
                        return 0;
                    }
                    v = next;
                }
            }
        }
    }
    cout << 0;

    return 0;
}
