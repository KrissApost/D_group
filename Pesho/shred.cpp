#include <bits/stdc++.h>
using namespace std;
const int mm = 1000000;
int br[mm+1];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    for(int x = 1; x <= n; x++){
        for(int z = x; z <= mm-n; z+=x){
            br[z]++;
        }
    }
    int m;
    for(int i = 0; i < q; i++){
        cin >> m;
        cout << br[m-n] << '\n';
    }
    return 0;
}
