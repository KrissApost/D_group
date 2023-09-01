#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int gcd(int a, int b){
    while(b != 0){
        a = a % b;
        swap(a,b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a;
    cin >> a;
    int g = a;
    for(int i = 1; i < n; i++){
        cin >> a;
        g = gcd(g, a);
    }
    cout << g;

    return 0;
}
