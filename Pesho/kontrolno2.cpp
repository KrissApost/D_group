#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> br;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        int r = v[i];
        for(int i = 2; i <= sqrt(v[i]); i++){
            if(!isPrime(i)) continue;
            if(v[i] % i == 0){
                while(r % i == 0){
                    br[i]++;
                    r /= i;
                }
            }
            if(isPrime(r)){
                br[r]++;
                break;
            }
            if(r == 1){
                break;
            }
        }
    }
    for(auto p: br){
        while(p.second > 0){
            cout << p.first << " ";
            p.second--;
        }
    }

    return 0;
}
