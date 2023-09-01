#include <bits/stdc++.h>
using namespace std;
string s;
int n, m;
int ss;
char t[51][51];
bool f;
void rec(int x, int y,int h){
//    cout << t[x][y] << " " << h << " ";
    if(h == ss){
        f = true;
        return;
    }
    if(x > 0 && h != ss && t[x-1][y] == s[h]){
//        cout << "up" << endl;
        rec(x-1,y,h+1);
        if(f) return;
    }
    if(y > 0 && h != ss && t[x][y-1] == s[h]){
//        cout << "left" << endl;
        rec(x,y-1,h+1);
        if(f) return;
    }
    if(x < n - 1 && h != ss && t[x+1][y] == s[h]){
//        cout << "down" << endl;
        rec(x+1,y,h+1);
        if(f) return;
    }
    if(y < m - 1 && h != ss && t[x][y+1] == s[h]){
//        cout << "right" << endl;
        rec(x,y+1,h+1);
        if(f) return;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> t[i][j];
        }
    }
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> s;
        ss = s.size();
        for(int x = 0; x < n; x++){
            for(int y = 0; y < m; y++){
                f = false;
                if(t[x][y] == s[0]){
                    rec(x,y,1);
                    if(f){
                        cout << "Yes" << endl;
                        break;
                    }
                }
            }
            if(f) break;
        }
        if(!f){
            cout << "No" << endl;
        }
    }


    return 0;
}
