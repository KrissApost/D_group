#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
pair<string,long long> del(string& a, long long d){
    long long p = 0, c;
    string s = "";
    bool add0 = false;
    for(int i = 0; i < a.size(); i++){
        p = 10 * p + a[i] - '0';
        c = p / d;
        if (c != 0) add0 = true;
        if (add0) s.push_back(c+'0');
        p = p - d * c;
    }
//    reverse(s.begin(),s.end());
//    while(s.back() == '0' && s.size() > 1) s.pop_back();
//    reverse(s.begin(),s.end());
    return {s,p};
}

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    string n = "0";
    for(int i = 0; i < a.size(); i++){
        string c = "0";
        c[0] = a[i];
        string s = pro(n,2);
        n = sum(s,c);
    }
    reverse(n.begin(), n.end());
    pair<string,long long> p = del(n,7);
    string s = p.first;
    long long k = p.second;
    if(k == 0){
        cout << "YES";
    }else{
        cout << 7 - k;
    }

    return 0;
}


