#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int p;
    cin >> p;
    string a,c;
    cin >> a;
    cin >> c;
    long long n = 0;
    for(int i = 0; i < a.size(); i++){
        if(isdigit(a[i])){
            n = p * n + a[i] - '0';
        }else{
            n = p * n + a[i] - 'A' + 10;
        }
    }
    long long n2 = 0;
    for(int i = 0; i < c.size(); i++){
        if(isdigit(c[i])){
            n2 = p * n2 + c[i] - '0';
        }else{
            n2 = p * n2 + c[i] - 'A' + 10;
        }
    }
    n += n2;
    string s;
    while(n != 0){
        if(n % p < 10){
            s.push_back('0' + n % p);
        }else{
            s.push_back('A' + n % p - 10);
        }
        n /= p;
    }
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}

