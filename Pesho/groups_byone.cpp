#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int s = 0;
    for(int i = 0; i < n; i++){
//        cout << vec[i] - vec[i+1] << " - ";
        if(abs(vec[i] - vec[i+1]) >= 2 || i == n - 1) {
            cout << s << " " << i << "\n";
            s = i + 1;
        }
    }

    return 0;
}

