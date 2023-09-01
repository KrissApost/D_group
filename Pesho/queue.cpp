#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    int a, b;
    for(int i = 0; i < q; i++){
        cin >> a;
        if(a == 1){
            vec.erase(vec.begin());
            continue;
        }
        cin >> b;
        if(a == 2){
            vec.push_back(b);
            continue;
        }
        cout << vec[b-1]  << "\n";
    }

    return 0;
}
