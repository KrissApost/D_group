#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int arr[100000], n, k, mi = 1000000000;
vector<pair<int,int>> v;
long long bs(){
    int l = 0, r = mi, ans = mi;
    while(l <= r){
        int x = (l+r)/2, f = 0;
        for(int i = 1; i < n; i++){
            f = max(f,max(0,arr[i]-(arr[0]+(i-1)*x)));
        }
        if(arr[0] + (n-1) * x == k - f){
            return x;
        }
        if(arr[0] + (n-1) * x < k - f){
            l = x + 1;
        }
        if(arr[0] + (n-1) * x > k - f){
            ans = min(ans,x);
            r = x - 1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mi = min(mi,arr[i]);
    }
    sort(arr,arr+n);
    cout << bs();

    return 0;
}
