#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c;
    int arr[10] = {0};
    for(int i = 0; i < n; i++){
        cin >> c;
        arr[c-'0']++;
    }
    int m = 0, r;
    for(int i = 0; i < 10; i++){
        if(arr[i] > m){
            m = arr[i];
            r = i;
        }
    }
    cout << r;

    return 0;
}

