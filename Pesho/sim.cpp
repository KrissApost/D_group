#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int a, b;
    map<pair<int,int>, bool> br;
    for(int i = 0; i < k; i++){
        cin >> a >> b;
        a--;
        b--;
        br[{a,b}] = 1;
    }
    for(auto p: br){
        int r1 = n - p.first.first - 1, c1 = p.first.second;
        int r2 = p.first.first, c2 = m - p.first.second - 1;
        int r3 = n - p.first.first - 1, c3 = m - p.first.second - 1;
        if(br[{r1,c1}] != 1){
            br[{r1,c1}] = 1;
        }
        if(br[{r2,c2}] != 1){
            br[{r2,c2}] = 1;
        }
        if(br[{r3,c3}] != 1){
            br[{r3,c3}] = 1;
        }
    }
    cout << br.size();

    return 0;
}
