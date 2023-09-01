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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(n < 3){
        cout << n;
        return 0;
    }
    if(n == 3){
        cout << 6;
        return 0;
    }
    string s = "42";
    for(int i = 5; i <= n; i++){
        s = pro(s,i);
    }
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    cout << sum;

    return 0;
