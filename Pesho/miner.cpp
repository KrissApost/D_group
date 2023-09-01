#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n;
    int t[n][n];
    char c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> c;
            if(c == '.') t[i][j] = 0;
            if(c == '@') t[i][j] = 9;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(t[i][j] == 9){
                if(i > 0 && t[i-1][j] != 9) t[i-1][j]++;
                if(j > 0 && t[i][j-1] != 9) t[i][j-1]++;
                if(i > 0 && j > 0 && t[i-1][j-1] != 9) t[i-1][j-1]++;
                if(i < n - 1 && t[i+1][j] != 9) t[i+1][j]++;
                if(i < n - 1 && j > 0 && t[i+1][j-1] != 9) t[i+1][j-1]++;
                if(j < n - 1 && t[i][j+1] != 9) t[i][j+1]++;
                if(i > 0 && j < n - 1 && t[i-1][j+1] != 9) t[i-1][j+1]++;
                if(i < n - 1 && j < n - 1 && t[i+1][j+1] != 9) t[i+1][j+1]++;
            }
        }
    }
    vector<pair<int,int>> p = {{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(t[i][j] == 0){
                t[i][j] = -1;
                ans++;
                vector<pair<int,int>> v = {{i,j}};
                for(int o = 0; v.size(); o++){
                    vector<pair<int,int>> next;
                    for(auto p1: v){
                        for(auto p2: p){
                            int x = p1.first + p2.first;
                            int y = p1.second + p2.second;
                            if(x < 0 || x >= n || y < 0 || y >= n){
                                continue;
                            }
                            if(t[x][y] != 0){
                                t[x][y] = -1;
                                continue;
                            }
                            t[x][y] = -1;
                            next.push_back({x,y});
                        }
                    }
                    v = next;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(t[i][j] != -1 && t[i][j] != 9){
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}
