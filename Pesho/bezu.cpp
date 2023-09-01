#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> bezu(long long a, long long b){
    if(b == 0) return {1,0};
    auto p = bezu(b,a%b);
    return {p.second, p.first-p.second*(a/b)};
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a, b;
    cin >> a >> b;
    cout << bezu(a,b).first << " " << bezu(a,b).second;

    return 0;
}
