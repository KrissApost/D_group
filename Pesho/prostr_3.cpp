#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

string pro1(string& a, long long b){
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

string pro2(string& a, string& b){
    string s, st;
    for(int i = 0; i < b.size(); i++){
        string s1 = s + pro1(a,b[i]-'0');
        s = s + '0';
        st = sum(st,s1);
    }
    return st;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    if(s2 == "0" || s1 == "0"){
        cout << "0";
        return 0;
    }
    int f = 0;
    if(s1[0] == '-'){
        f++;
        s1.erase(s1.begin() + 0);
    }
    if(s2[0] == '-'){
        f++;
        s2.erase(s2.begin() + 0);
    }
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    string s = pro2(s1,s2);
    reverse(s.begin(), s.end());
    if(f == 1){
        cout << '-';
    }
    cout << s;

    return 0;
}

