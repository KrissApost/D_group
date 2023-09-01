#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<long long> v(3);
    for(int i = 0; i < 3; i++) cin >> v[i];
    long long m = 0;
    for(int i = 0; i < 27; i++){
        long long s = 0;
        int x = i;
        for(int j = 0; j < 3; j++){
            if(x%3 == 0){
                s += v[j];
            }
            if(x%3 == 1){
                s *= v[j];
            }
            if(x%3 == 2){
                s -= v[j];
            }
            x /= 3;
        }
        m = max(s,m);
    }
    cout << m;

    return 0;
}
