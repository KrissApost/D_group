#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
string go6o(long long n, int p){
    string a;
    while(n != 0){
        if(n % p < 10){
            a.push_back('0' + n % p);
        }else{
            a.push_back('A' + n % p - 10);
        }
        n /= p;
    }
    reverse(a.begin(), a.end());
    return a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string n;
    cin >> n;


    return 0;
}

