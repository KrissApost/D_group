#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin >> n >> k;
    long long s = n - k;
    vector<long long> vec(k);
    for(int i = 0; i < k; i++){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < k-1; i++){
        if(vec[i] == vec[i+1]){
            s++;
        }
    }
    cout << s;

    return 0;
}
