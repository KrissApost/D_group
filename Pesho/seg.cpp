#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[10000] = {};
    int m = 0;
    int ab[n], ae[n];
    for(int i = 0; i < n; i++){
        cin >> ab[i] >> ae[i];
    }
    int k;
    for(int i = 0; i < n; i++){
        k = 0;
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            if((ab[j] >= ab[i] && ab[j] <= ae[i]) || (ae[j] <= ae[i] && ae[j] >= ab[i])){
                k++;
            }
        }
        if(k > m){
            m = k;
        }
    }
    cout << m;

    return 0;
}
