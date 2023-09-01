#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
//    for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
//    cout << endl;
    int x;
    for(int i = 0; i < k; i++){
        cin >> x;
        for(int y = x-1; y < n-1; y++){
            swap(arr[y], arr[y+1]);
        }
        n--;
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
