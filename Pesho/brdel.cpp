#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    int k = 0;
    n = n * n;
    for(long long i = 1; i <= sqrt(n); i++){
        if(n % i == 0) k+=2;
        if(i * i == n) k--;
    }
    cout << k;

    return 0;
}
