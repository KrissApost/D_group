#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long g, l;
    cin >> g >> l;
    long long k = 0, h = g * l;
    for(long long a = 1; a * a <= h; a++){
        long long b = h / a;
        if(l % a == 0){
            if(__gcd(a,b) == g){
                k++;
            }
        }
    }
    cout << k;
    return 0;
}
