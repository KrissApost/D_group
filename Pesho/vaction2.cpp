#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v1(3);
    for(int i = 0; i < 3; i++) cin >> v1[i];
    vector<int> v2(3);
    for(int i = 0; i < 3; i++) cin >> v2[i];
    int m = 0;
    for(int i = 0; i < 27; i++){
        int w[3] = {};
        int a[3] = {};
        int x = i, k = 0;
        for(int j = 0; j < 3; j++){
            w[x%3] += v2[j];
            a[x%3]++;
            x /= 3;
        }
        if(w[0] <= v1[0]){
            k+=a[0];
        }
        if(w[1] <= v1[1]){
            k+=a[1];
        }
        if(w[2] <= v1[2]){
            k+=a[2];
        }
        m = max(m,k);
    }
    cout << m;

    return 0;
}

