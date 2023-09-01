#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int br[n] = {};
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    br[0] = 1;
    int j = 0;
    while(br[v[j]] != 3){
        br[v[j]]++;
        j = v[j];
    }
    int k1 = 0, k2 = 0;
    for(int i = 0; i < n; i++){
        if(br[i] == 1){
            k1++;
        }
        if(br[i] == 0){
            k2++;
        }
    }
    cout << k1 << " " << n - k1 - k2 << " " << k2;

    return 0;
}

