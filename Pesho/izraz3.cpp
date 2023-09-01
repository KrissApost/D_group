#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<long long> v(3);
    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if(v[0] == 0 && v[1] == 0){
        cout << v[2];
        return 0;
    }
    cout << v[0] + v[1] * v[2];

    return 0;
}

