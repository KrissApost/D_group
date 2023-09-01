#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    long long n, k;
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        if(k*(k+1)/2 >= n){
            cout << -1 << endl;
            continue;
        }
        vector<long long> deli;
        double h = sqrt(n);
        for(long long y = 1; y < h; y++){
            if(n % y == 0){
                deli.push_back(y);
                deli.push_back(n/y);
            }
        }
        if(sqrt(n) == trunc(sqrt(n))){
            deli.push_back(sqrt(n));
        }
        sort(deli.begin(),deli.end());
        long long s = k*(k+1)/2;
        for(long long y = 0; y < deli.size(); y++){
            if(deli[y] >= s){
                s = deli[y];
            }
        }
        cout << n / s << endl;
    }

    return 0;
}
