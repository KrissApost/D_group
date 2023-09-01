#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, st = "";
    cin >> s;
    string d1, z, d2;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == ':'){
            d1 = st;
        }else{
            st+=s[i];
        }
    }

    return 0;
}
