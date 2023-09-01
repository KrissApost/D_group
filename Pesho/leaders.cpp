#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int m = -1000000000;
    vector <int> vec;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] >= m){
            vec.insert(vec.begin(), arr[i]);
            m = arr[i];
        }
    }
    for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";

    return 0;
}
