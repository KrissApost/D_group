#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<pair<int,int>> p = {{-1,0},{1,0},{0,-1},{0,1}};
    int n, m;
    cin >> n >> m;
    int t[n][m];
    for(int i = 0; i < n; i++){
        for(int y = 0; y < m; y++){
            cin >> t[i][y];
        }
    }
    for(int i = 0; i < n; i++){
        for(int y = 0; y < m; y++){
            if(t[i][y] == 0){
                vector<pair<int,int>> v = {{i,y}};
                t[i][y] = 1;
                for(int i1 = 2; v.size(); i1++){
                    vector<pair<int,int>> next1;
                    for(auto p1: v){
                        for(auto p2: p){
                            int x = p1.first + p2.first;
                            int y1 = p1.second + p2.second;
                            if(x < 0 || x >= n || y1 < 0 || y1 >= m) continue;
                            if(t[x][y1] != 0) continue;
                            next1.push_back({x,y1});
                            t[x][y1] = i1;
                        }
                    }
                    v = next1;
                }
            }
        }
    }
    int ma = 0, r = 0;
    for(int i = 0; i < n; i++){
        for(int y = 0; y < m; y++){
            ma = max(ma,t[i][y]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int y = 0; y < m; y++){
            if(ma == t[i][y]){
                r++;
            }
        }
    }
    cout << ma << " " << r;

    return 0;
}
