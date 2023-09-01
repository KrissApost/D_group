#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n;
    long long arr[n+1];
    long long a;
    arr[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        arr[i+1] = arr[i] + a;
    }
    cin >> q;
    long long b;
    for(int i = 0; i < q; i++){
        cin >> a >> b;
        cout << arr[b] - arr[a-1] << endl;
    }

    return 0;
}
