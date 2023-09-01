#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v(4);
    for(int i = 0; i < 4; i++) cin >> v[i];
    int m = 1000;
    for(int i = 0; i < 16; i++){
        int w[2] = {};
        int x = i;
        for(int j = 0; j < 4; j++){
            w[x%2] += v[j];
            x /= 2;
        }
        if(abs(w[0]-w[1]) < m){
            m = abs(w[0]-w[1]);
        }
    }
    cout << m;

    return 0;
}
