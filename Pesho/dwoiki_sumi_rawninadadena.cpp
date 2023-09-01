#include <bits/stdc++.h>
using namespace std;
bool d[1000001];
int main() {
    int n, k;
    cin >> n >> k;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        d[a] = true;
    }
    int s = 0;
    for(int i = 0; i < k/2; i++){
        if(d[i] && d[k-i]) s++;
    }
    cout << s;

    return 0;
}

