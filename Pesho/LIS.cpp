#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int arr1[n];
    for(int i = 0; i < n; i++) arr1[i] = 1;
    for(int i = 1; i < n; i++){
        for(int y = 0; y < i; y++){
            if(arr[i] > arr[y] && arr1[i] < arr1[y] + 1){
                arr1[i] = arr1[y] + 1;
            }
        }
    }
    int m = 0;
    for(int i = 0; i < n; i++){
        m = max(arr1[i],m);
    }
    cout << m;

    return 0;
}
