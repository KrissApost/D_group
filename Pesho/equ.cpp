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

string pro1(string& a, int b){
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

string pro(string& a, string& b){
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
    string a, b, c;
    char z, r;
    cin >> a >> z >> b >> r >> c;
    int m = 0, k;
    for(int i = 0; i < a.size(); i++){
        if(a[i] - '0' > m){
            m = a[i] - '0';
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] - '0' > m){
            m = b[i] - '0';
        }
    }
    for(int i = 0; i < c.size(); i++){
        if(c[i] - '0' > m){
            m = c[i] - '0';
        }
    }
    for(int i = 10; i > m; i++){
        string a1 = a, b1 = b;
        string s1, s2, s3;
        for(int i = 0; i < a.size(); i++){
            string st = "" + a[i];
            s1 = sum(pro1(s1,i),st);
        }
        for(int i = 0; i < b.size(); i++){
            string st = "" + b[i];
            s2 = sum(pro1(s2,i),st);
        }
        for(int i = 0; i < c.size(); i++){
            string st = "" + c[i];
            s3 = sum(pro1(s3,i),st);
        }
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        string s;
        if(z == '+'){
            s = sum(s1,s2);
        }else{
            s = pro(s1,s2);
        }
        if(s == s3){
            k = i;
            break;
        }
    }
    for(int i = m+1; i <= k; i++){
        cout << i << " ";
    }

    return 0;
}

