#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a){
    if(a < 4){
        return true;
    }
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(n == 4){
        cout << 4;
        return 0;
    }
    if(n == 5){
        cout << 4;
        return 0;
    }
    if(n == 6){
        cout << 6;
        return 0;
    }
    if(n == 7){
        cout << 6;
        return 0;
    }
    if(n == 8){
        cout << 8;
        return 0;
    }
    int r = sqrt(n);
    while(!isPrime(r)) r--;
    int k = r, b = r;
    while(true){
        if(!isPrime(k)){
            continue;
        }
        if(k * r > n){
            cout << b * r;
            return 0;
        }
        b = k;
        k+=2;
    }

    return 0;
}


