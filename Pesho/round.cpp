#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    n--;
    if(n == 0){
        cout << 0;
        return 0;
    }
    string s;
    while(n != 0){
        if(n % 2 < 10){
            s.push_back('0' + n % 2);
        }else{
            s.push_back('A' + n % 2 - 10);
        }
        n /= 2;
    }
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            s[i] = '6';
        }
    }
    cout << s;

    return 0;
}


