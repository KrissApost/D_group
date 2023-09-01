#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    m *= 2;
    int str = p * q;
    int br[1001] = {};
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        br[a]++;
    }
    int k = 1;
    int r = m;
    for(int i = 0; i < 1001; i++){
        m -= br[i] / str;
        if(br[i] % str != 0){
            m--;
        }
        while(m < 0){
            k++;
            m += r;
        }
    }
    cout << k;

    return 0;
}
