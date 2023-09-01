#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    int s = 0, n = a.length()-1;
    for(int i = n; i >= 0; i--) s+=pow(2,i)*(a[n-i]-'0');
    cout << s;

    return 0;
}
