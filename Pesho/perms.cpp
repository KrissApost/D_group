#include <bits/stdc++.h>
using namespace std;
long long m = 1000000007;
bool arr[501][501*501/2];
long long arr2[501][501*501/2];
long long f(int n, int k){
    if(k < 0) return 0;
    if(2 * k > n * (n-1)) return 0;
    if(n == 1 && k == 0) return 1;
    if(n == 1) return 0;
    if(arr[n][k]) return arr2[n][k];
    arr[n][k] = 1;
    return arr2[n][k] = (f(n-1,k)+f(n,k-1)-f(n-1,k-n)+m)%m;
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << f(n,k) << endl;

    return 0;
}

