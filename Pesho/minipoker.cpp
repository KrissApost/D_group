#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    int s = 0;
    cin >> n >> k;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        s+=vec[i];
    }
    sort(vec.begin(), vec.end());
    while(n - k >= 0){
        n -= k;
        s-=vec[n];
//        cout << vec[n] << " ";
    }
    cout << s;

    return 0;
}
