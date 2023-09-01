#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
        arr2[arr1[i]] = i;
    }
    int k = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i] != i){
            k++;
            swap(arr1[i],arr1[arr2[i]]);
            swap(arr2[i],arr2[arr1[arr2[i]]]);
        }
//        for(int y = 0; y < n; y++) cout << arr1[y] << " ";
//        cout << endl;
    }
    cout << k;

    return 0;
}
