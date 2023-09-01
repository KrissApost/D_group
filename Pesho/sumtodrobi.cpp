#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(long long i = 2; i < min(a,b); i++) if (b % i == 0 && a % i == 0){b /= i; a /= i;}
    for(long long i = 2; i < min(c,d); i++) if (d % i == 0 && c % i == 0){d /= i; c /= i;}
    long long r;
    for(long long i = 1; i <= b * d; i++) if (i % b == 0 && i % d == 0){r = i; break;}
    long long s = a * r / b + c * r / d;
    for(long long i = 2; i < min(s,r); i++) if (s % i == 0 && r % i == 0){s /= i; r /= i;}
    if(s % r == 0){
        cout << s / r;
        return 0;
    }
    cout << s << "/" << r;

    return 0;
}
