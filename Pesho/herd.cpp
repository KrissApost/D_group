#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
char mat[250][250];
int n, m;

static void print(){
    cout << endl;
    for(int i1 = 0; i1 < n; i1++){
        for(int i2 = 0; i2 < m; i2++) cout << mat[i1][i2];
        cout << endl;
    }
}

void lok(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == '*'){
                if(i > 0 && mat[i-1][j] != 'X' && mat[i-1][j] != 'D'){
                    mat[i-1][j] = '-';
                }
                if(j > 0 && mat[i][j-1] != 'X' && mat[i][j-1] != 'D'){
                    mat[i][j-1] = '-';
                }
                if(i < n - 1 && mat[i+1][j] != 'X' && mat[i+1][j] != 'D'){
                    mat[i+1][j] = '-';
                }
                if(j < m - 1 && mat[i][j+1] != 'X' && mat[i][j+1] != 'D'){
                    mat[i][j+1] = '-';
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == '-'){
                mat[i][j] = '*';
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    pair<int,int> s, d;
    vector<pair<int,int>> p = {{-1,0},{1,0},{0,-1},{0,1}};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 'S') s = {i,j};
            if(mat[i][j] == 'D') d = {i,j};
        }
    }
    vector<pair<int,int>> v = {s};
    for(int i = 0; v.size(); i++){
        vector<pair<int,int>> next;
        for(auto p1: v){
            lok();
            for(auto p2: p){
//                print();
                int x = p1.first + p2.first;
                int y = p1.second + p2.second;
                if(x < 0 || x >= n || y < 0 || y >= m){
                    continue;
                }
                if(mat[x][y] == 'X' || mat[x][y] == '*') continue;
                if(x == d.first && y == d.second){
                    cout << i+1;
                    return 0;
                }
                next.push_back({x,y});
                mat[x][y] = 'X';
            }
        }
        v = next;
    }
    cout << "Impossible";

    return 0;
}
