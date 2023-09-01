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

    return {s,p};
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
    long long a;
    string b, c, x;
    cin >> a >> b >> c;
    reverse(b.begin(), b.end());
    reverse(c.begin(), c.end());
    string s = raz(b, c);
    reverse(s.begin(), s.end());
    cout << s << " " << del(s,a).first;

    return 0;
}
