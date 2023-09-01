#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    if(a == b){
        for(int i = 0; i < n; i++) cout << a;
        return 0;
    }
    long long s = 1;
    for(int i = 1; i < n; i++) s += pow(10,i);
    long long t = s * pow(2, n - 1)  * (a+b);
    cout << t;

    return 0;
}
