#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
string sum(string& a, string& b){
    int p = 0, c;
    string s = "";
    for(int i = 0; i < max(a.size(), b.size())||p!=0; i++){
        c = p;
        if(i < a.size()) c += a[i] - '0';
        if(i < b.size()) c += b[i] - '0';
        s.push_back('0' + c % 10);
        p = c / 10;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    string s = sum(s1,s2);
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}

