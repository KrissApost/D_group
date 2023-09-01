#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> q;
        int m = q / 2 + q % 2;
        map<int,int> br1;
        map<int,int> br2;
        int a;
        for(int j = 0; j < q; j++){
            cin >> a;
            br1[a]++;
        }
        for(int j = 0; j < q; j++){
            cin >> a;
            br2[a]++;
        }
        int k = q+3;
        for(auto p: br1){
            if(p.second >= m){
                k = 0;
                break;
            }
            if(m - p.second <= br2[p.first]){
                if(m - p.second < k){
                    k = m - p.second;
                }
            }
        }
        if(k == q+3){
            cout << -1 << endl;
        }else{
            cout << k << endl;
        }
    }

    return 0;
}
