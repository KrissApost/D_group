#include <bits/stdc++.h>
using namespace std;
int n, m;
int k = 1;
int t[1000][1000];
void rec(int x, int y){
    if(x < 0 || y < 0 || x == n || y == m) return;
    if(t[x][y] != k) return;
    t[x][y] = 0;
    rec(x-1,y);
    rec(x,y-1);
    rec(x+1,y);
    rec(x,y+1);
}
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> t[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(t[i][j] != 0){
                ans++;
                k = t[i][j];
                rec(i,j);
            }
        }
    }
    cout << ans;

    return 0;
}
