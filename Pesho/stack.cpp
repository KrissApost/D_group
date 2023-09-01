#include <bits/stdc++.h>
using namespace std;
int arr[100000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int s = n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int a, b;
    for(int i = 0; i < q; i++){
        cin >> a;
        if(a == 1){
            s--;
            continue;
        }
        cin >> b;
        if(a == 2){
            arr[s] = b;
            s++;
            continue;
        }
        cout << arr[b-1] << "\n";
    }

    return 0;
}
