#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    int k = 0;
    for(int i = a; i <= b; i++){
        int s = 1, r = i;
        while(r > 0){
            s *= r % 10;
            r /= 10;
        }
        if(s != 0 && i % s == 0){
            k++;
        }
    }
    cout << k;

    return 0;
}


