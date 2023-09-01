#include<bits/stdc++.h>
using namespace std;
int num[10000000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int m = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        num[v[i]]++;
        m = max(m,v[i]);
    }
    int br[m+1] = {};
    for(int i = 1; i <= m; i++){
        for(int y = i; y <= m; y+=i){
            br[i] += num[y];
        }
    }
    for(int i = m; i >= 0; i--){
        if(br[i] >= k){
            cout << i;
            return 0;
        }
    }

    return 0;
}
