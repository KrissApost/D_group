#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int arr[n];
    int k = vec[n-1];
    for(int i = n-1; i >= 0; i--){
        if(vec[i] > k){
            k = vec[i];
        }
        arr[i] = k;
    }
    int m = 0;
    for(int i = 0; i < n; i++){
        if(m < arr[i] - vec[i]){
            m = arr[i] - vec[i];
        }
    }
    cout << m;

    return 0;
}
