#include <bits/stdc++.h>
using namespace std;
char M[1000][1000];
int n, m , P = 0, S = 10000000;

void go (int x, int y, int s, int p){
    if(x < 0 || y < 0 || x >= n || y >= m || M[x][y] == 'x') return;
    s++;
    if (s > S) return;
    char old = M[x][y];
    if(M[x][y] == 'T'){
        if (S >= s){
            S = s;
            if(P <= p){
                P = p;
            }
        }
        return;
    }
    if (M[x][y] == '+') p++;
    M[x][y] = 'x';
    go(x-1, y, s, p);
    go(x, y-1, s, p);
    go(x+1, y, s, p);
    go(x, y+1, s, p);
    M[x][y] = old;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x = 0, y = 0;
    cin >> n >> m;
    for(int i1 = 0; i1 < n; i1++){
        for(int i2 = 0; i2 < m; i2++){
            cin >> M[i1][i2];
            if (M[i1][i2] == 'S'){
                x = i1;
                y = i2;
            }
        }
    }

    go(x, y, -1, 0);
    cout << S << " " << P;
    return 0;
}
