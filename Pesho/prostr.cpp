#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
string pro(string& a, long long b){
    long long p = 0, c;
    string s;
    for(int i = 0; i < a.size() || p!=0; i++){
        c = p;
        if(i < a.size()) c += (a[i] - '0') * b;
        s.push_back('0' + c % 10);
        p = c / 10;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1;
    cin >> s1;
    long long b;
    cin >> b;
    if(b == 0){
        cout << "0";
        return 0;
    }
    reverse(s1.begin(), s1.end());
    string s = pro(s1,b);
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}

