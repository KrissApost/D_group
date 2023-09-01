#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long s = 1;
    vector <long long> v;
    for(int i = 0; i < 60; i++){
        v.push_back(s);
        s *= 2;
    }
    long long n;
    cin >> n;
    int l = 0;
    for(int i = 0; i < v.size(); i++){
        long long k = 0;
        for(int j = i; j < v.size(); j++){
            k += v[j];
            if(k <= n){
                l++;
            }
        }
    }
    cout << l;

    return 0;
}
