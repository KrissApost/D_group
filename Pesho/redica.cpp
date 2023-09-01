#include <bits/stdc++.h>
using namespace std;
int N, r = INT_MAX;
void rek(int n, int k){
    k++;
    if(k > 28){
        return;
    }
//    cout << n << ":" << k << "  ";
    if(n == N){
        r = min(r,k);
        return;
    }
    if(n > N){
        return;
    }
    int x = n;
    while(x != 0){
        int j = x % 10;
        if(j != 0){
            rek(n + j,k);
        }
        x /= 10;
    }
    return;
}
int main(){
    cin >> N;
    rek(1,0);
    if(r == INT_MAX){
        r = -1;
    }
    cout << r;

    return 0;
}
