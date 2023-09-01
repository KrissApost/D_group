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
string raz(string& a, string& b){
    int p = 0, c;
    string s = "";
    for(int i = 0; i < a.size(); i++){
        c = (a[i] - '0') - p;
        if(i < b.size()) c -= b[i] - '0';
        if(c < 0){
            c += 10;
            p = 1;
        }else{
            p = 0;
        }
        s.push_back('0' + c);
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    string m;
    cin >> n >> m;
    string s = "1";
    if(n % 2 == 0){
        for(int i = 0; i < n / 2; i++){
            s = pro(s,4);
        }
    }else{
        for(int i = 0; i < n / 2; i++){
            s = pro(s,4);
        }
        s = pro(s,2);
    }
    reverse(m.begin(), m.end());
    string st;
    if(m.back() != '-'){
        st = raz(s,m);
    }else{
        m.pop_back();
        st = sum(s,m);
    }
    while(st.back() == '0'){
        st.pop_back();
    }
    reverse(st.begin(), st.end());
    cout << st;

    return 0;
}
