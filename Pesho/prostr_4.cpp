#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

string pro(string a, string b){
    long long p = 0, c;
    string s;
    for(int i = 0; i < a.size() + b.size(); i++){
        s.push_back('0');
    }
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size() || p != 0; j++){
            c = p + (s[i+j] - '0');
            if(i < a.size()) c += (a[i] - '0') * (b[j] - '0');
            s[i+j] = '0' + c % 10;
            p = c / 10;
        }
    }
    while(s.size() > 1 && s.back() == '0') s.pop_back();
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << pro("01","443");
    return 0;
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
    string s = pro(s1,s2);
    reverse(s.begin(), s.end());
    if(f == 1){
        cout << '-';
    }
    cout << s;

    return 0;
}

