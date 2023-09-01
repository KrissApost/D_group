#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        int k = 0;
        for(int y = 0; y < i; y++){
            if(arr[y] == arr[i]) k++;
        }
        cout << k << " ";
    }
    return 0;
}

