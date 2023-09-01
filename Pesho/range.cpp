#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int arr[100000] = {};
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++){
        arr[v[i]]++;
    }
    for(int i = 1; i < 100000; i++){
        arr[i] = arr[i-1];
    }
    int q;
    cin >> q;
    int a, b;
    for(int i = 0; i < q; i++){
        cin >> a >> b;
        cout << arr[b]-arr[a-1] << endl;
    }

    return 0;
}
