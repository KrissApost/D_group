#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int n;
string sum(string& a){
    int i = n-1;
    while(a[i] == '1'){
        a[i] = '0';
        i--;
    }
    a[i] = '1';
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    n = s.size();
    cout<< sum(s);

    return 0;
}
