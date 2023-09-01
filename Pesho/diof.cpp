#include <bits/stdc++.h>
using namespace std;
pair<long long,long long> bezu(long long a,long long b){
    if(b == 0) return {1,0};
    auto p = bezu(b,a%b);
    return {p.second, p.first-p.second*(a/b)};
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a, b, c;
    cin >> a >> b >> c;
    if(a == 0 || b == 0){
        cout << "no";
        return 0;
    }
    if(c % __gcd(a,b) != 0){
        cout << "no";
        return 0;
    }
    c /= __gcd(a,b);
    pair<long long,long long> ans = bezu(a,b);
    cout << ans.first*c << " " << ans.second*c << endl;
    return 0;
}
