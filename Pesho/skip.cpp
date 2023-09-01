#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector <int> vec(n);
    int a, k = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a % 2 == 0){
            vec[k] = a;
            k++;
        }
    }
    for(int i = 0; i < q; i++){
        cin >> a;
        cout << vec[a-1] << " ";
    }

    return 0;
}
