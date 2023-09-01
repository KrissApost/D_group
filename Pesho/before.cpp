#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int arr[10000000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        cout << arr[a] << " ";
        arr[a]++;
    }
    return 0;
}
