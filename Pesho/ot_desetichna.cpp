#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int b;
    cin >> b;
    long long n;
    cin >> n;
    if(n == 0){
        cout << 0;
        return 0;
    }
    string s;
    while(n != 0){
        if(n % b < 10){
            s.push_back('0' + n % b);
        }else{
            s.push_back('A' + n % b-10);
        }
        n /= b;
    }
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}

