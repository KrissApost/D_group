#include <bits/stdc++.h>
using namespace std;
bool isSimple(int a){
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int p, r = n;
    if(n < 4){
        p = n;
    } else {
        for(int i = 2; i <= r / 2; i++){
            if(isSimple(n)){
                p = n;
                break;
            }
            while(n % i == 0){
                p = n;
                n /= i;
            }
            if(n == 1){
                break;
            }
        }
    }
//    cout << p;
    int x = r / p, k = 0;
    while(true) {
        k++;
        if(isSimple(x+k) && x + k > p){
            cout << p * (x+k);
            return 0;
        }
    }

    return 0;
}

