#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector <int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    bool f = true, b = false;
    int r = 0, m = 0;
    for(int i = 0; i < n; i++){
        if(vec[i] == 0){
            b = true;
            r = 1;
            continue;
        }
        if((b) && (vec[i] < k && i == n - 1) || (vec[i] < k && vec[i] - 1 == vec[i-1])){
            r++;
        }else{
            b = false;
            f = false;
            m = max(m,r);
            r = 0;
        }
    }
    m = max(m,r);
    if(f) {
        cout << "YES " << m;
    }else{
        cout << "NO " << m;
    }

    return 0;
}
