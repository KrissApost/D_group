#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    int n, m;
    cin >> n >> m;
    pair<int,int> s, t;
    vector<pair<int,int>> p = {{-1,0},{1,0},{0,-1},{0,1}};
    char mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 'S') s = {i,j};
            if(mat[i][j] == 'T') t = {i,j};
        }
    }
    vector<pair<int,int>> v = {s};
    int r = m * n, ma = 0;
    int k = 0;
    for(int i = 0; v.size(); i++){
        vector<pair<int,int>> next;
        for(auto p1: v){
            for(auto p2: p){
                int x = p1.first + p2.first;
                int y = p1.second + p2.second;
                if(x < 0 || x >= n || y < 0 || y >= m){
                    continue;
                }
                if(mat[x][y] == 'x') continue;
                if(mat[x][y] == '+'){
                    k++;
                }
                cout << x << " " << y << endl;
                if(x == t.first && y == t.second){
                    if(i + 1 <= r){
                        r = i+1;
                        if(k > ma){
                            ma = k;
                        }
                    }
                }
                next.push_back({x,y});
                mat[x][y] = 'x';
            }
        }
        v = next;
        k = 0;
    }
    cout << r << " " << ma;

    return 0;
}
