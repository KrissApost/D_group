#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int ans[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ans[0] = arr[0];
    ans[1] = arr[1];
    for(int i = 2; i < n; i++){
        ans[i] = arr[i] + max(ans[i-2], ans[i-1]);
    }
    cout << max(ans[n-1],ans[n-2]);
    return 0;
}
