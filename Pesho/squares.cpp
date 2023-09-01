#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector <int> vec;
    for(int i = 1; i <= 3162; i++){
        vec.push_back(i*i);
    }
    int n;
    cin >> n;
    int a, k = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        for(int y = 0; a - vec[y] > 0; y++){
            double h = sqrt(a-vec[y]);
            if(a-vec[y] != 0 && h == trunc(h)){
                k++;
                break;
            }
        }
    }
    cout << k;

    return 0;
}
