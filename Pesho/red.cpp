#include <bits/stdc++.h>
using namespace std;
int br[100000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n], b;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        arr[i] = br[a[i]];
        br[a[i]]++;
    }

    for(int i = 0; i < k; i++){
        cin >> b;
        b--;
        cout << arr[b] << " " << br[a[b]] - arr[b] - 1 << endl;
    }

    return 0;
}

