#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    int arr1[3];
    for(int i = 0; i < 3; i++) cin >> arr[i];
    for(int i = 0; i < 3; i++) cin >> arr1[i];
    sort(arr, arr + 3);
    sort(arr1, arr1 + 3);
    int k = 0;
    for(int i = 0; i < 3; i++){
        for(int y = 0; y < 3; y++){
            if(arr1[i] <= arr[y]){
                arr[y] -= arr1[i];
                k++;
                break;
            }
        }
    }
    cout << k;

    return 0;
}

