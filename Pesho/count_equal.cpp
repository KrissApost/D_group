#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector <int> vec(n);
    vector <int> vec2;
    for(int i = 0; i < n; i++) cin >> vec[i];
    int k = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || vec[i-1] != vec[i]){
            cout << i << " ";
        }
        if(i == n - 1 || vec[i] != vec[i+1]){
            cout << i << "\n";
        }
    }

    return 0;
}
