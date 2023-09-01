#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<string> v(4);
    for(int i = 0; i < 4; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 3; i >= 0; i--){
        cout << v[i] << " ";
    }

    return 0;
}

