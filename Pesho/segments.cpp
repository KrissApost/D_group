#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector<pair<long long,long long> > v(n+1);
    long long a, b, c, d;
    char s1, s2;
    for(long long i = 0; i < n; i++){
        cin >> s1 >> a >> b >> c >> d >> s2;
        if(s1 == '('){
            v[i].first = a / b + 1;
        }
        if(s2 == ')'){
            v[i].second = c / d - 1;
        }
        if(s1 == '['){
            v[i].first = a / b;
        }
        if(s2 == ']'){
            v[i].second = c / d;
        }
    }
    v[n].first = 1000000000000000;
    v[n].second = 1000000000000000;
    sort(v.begin(), v.end());
    long long s = v[0].first;
    long long f = v[0].second;
    long long k = 0, m = 0;
    for(long long i = 1; i <= n; i++){
        if(f < v[i].first){
            if(f >= s){
                k += f - s + 1;
            }
            s = v[i].first;
            f = v[i].second;
        }else{
            f = max(f, v[i].second);
        }
    }
    cout << k;
    return 0;
}
