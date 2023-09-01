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
    long long n;
    cin >> n;
    long long s = 0;
    int k = 0;
    for(long long i = 2; i * i * i * i <= n; i++){
        if(isSimple(i)) {
            s += i * i * i * i;
        }
    }
    cout << s;

    return 0;
}

