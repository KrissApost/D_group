#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

string pro(string& a, int b){
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
    int x, n;
    cin >> x >> n;
    string s = "1";
    string st = "1";
    while(s.size() < n){
        reverse(st.begin(), st.end());
        st = pro(st, x);
        reverse(st.begin(), st.end());
//        cout << st << endl;
        s += st;
    }
    cout << s[n-1];

    return 0;
}

