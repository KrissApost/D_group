#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    for(long long i = n; i >= 1; i--){
        long long h = sqrt(i);
        if(h * h == i) {
            cout << i;
            break;
        }
    }

    return 0;
}
