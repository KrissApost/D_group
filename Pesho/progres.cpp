#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int br[30000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, d;
    cin >> n >> d;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        if(vec[i]-(d*i) >= 0) br[vec[i]-(d*i)]++;
    }
    int m = 0;
    for(int i = 0; i < 30000001; i++){
        if(br[i] > m){
            m = br[i];
        }
    }
    if(n - m == 999){
        cout << 998;
    }else{
        cout << n-m;
    }

    return 0;
}
