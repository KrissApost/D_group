#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, a, b, l;
    cin >> n >> a >> b;
    unordered_map<long long,bool> br;
    for(int i = 0; i < n; i++){
        cin >> l;
        for(auto p: br){
            if(p.second == true){
                br[p.first+l] = true;
            }
        }
        br[l] = true;
    }
    int k = 0;
    for(auto p: br){
        if(p.first >= a && p.first <= b) k++;
    }
    cout << k;

    return 0;
}
