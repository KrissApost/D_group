#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    if(n == 1){
        cout << "no";
        return 0;
    }
    bool f = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            f = false;
            break;
        }
    }
    if(f){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}
