#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int ans[3][14] = {{}};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    pair<int,int> s, f;
    vector<pair<int,int>> p = {{-1,0},{1,0},{0,-1},{0,1}};
    char mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 'S') s = {i,j};
            if(mat[i][j] == 'F') f = {i,j};
        }
    }
    vector<pair<int,int>> v = {s};
    for(int i = 1; v.size(); i++){
        vector<pair<int,int>> next;
        for(auto p1: v){
            for(auto p2: p){
                int x = p1.first + p2.first;
                int y = p1.second + p2.second;
                if(x < 0 || x >= n || y < 0 || y >= m){
                    continue;
                }
                if(mat[x][y] == '#') continue;
                ans[x][y] = i;
//                if(x == f.first && y == f.second){
//                    cout << i+1;
//                    return 0;
//                }
                next.push_back({x,y});
                mat[x][y] = '#';
            }
        }
        v = next;
    }

    for(int i = 0; i < n; i++){
        for(int y = 0; y < m; y++){
            cout << ans[i][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
3 14
..#......S.#..
.#.F.###...#..
...#....#....#
*/
