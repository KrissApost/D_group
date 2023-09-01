#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
string n;
string k;
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
string pov(int u){
    string ans = k, b = k;
    reverse(ans.begin(),ans.end());
    reverse(b.begin(),b.end());
    for(int o = 0; o < u; o++){
        ans = pro(ans,b);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
bool sraw(string a, string b){
    if(a.size() > b.size()){
        return true;
    }
    if(a.size() == b.size()){
        if(a > b){
            return true;
        }
    }
    return false;
}
long long bs(){
    long long l = 20, r = 1000000000000, ans = 0;
    while(l <= r){
        int m = (l+r)/2;
        string f = pov(m);
        if(n == f){
            r = m-1;
            ans = m;
            return ans;
        }
        if(sraw(f,n)){
            r = m-1;
        }else{
            l = m+1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    cin >> n >> k;
//    cout << bs();
    cout << pro("10","344");

    return 0;
}
