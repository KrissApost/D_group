#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int b;
    cin >> b;
    string s;
    cin >> s;
    long long n = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            n = b * n + s[i] - '0';
        }else{
            n = b * n + s[i] - 'A' + 10;
        }
    }
    cout << n;

    return 0;
}

