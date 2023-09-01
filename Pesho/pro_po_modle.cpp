#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[n];
    long long s = 1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        s = (s * arr[i]) % m;
    }
    for(int i = 0; i < n; i++){
        cout << s / arr[i] << " ";
    }

    return 0;
}
