#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple <int,int>  arr[4];
    int n, h;
    for(int i = 0; i < 4; i++){
        cin >> n >> h;
        arr[i] = make_tuple(h,n);
    }
    sort(arr,arr+4);
    for(int i = 0; i < 4; i++){
        cout << get<1>(arr[i]) << " ";
    }

   return 0;
}

