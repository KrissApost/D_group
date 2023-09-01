#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector <int> vec0;
    vector <int> vec1;
    vector <int> vec2;
    int n, q;
    cin >> n >> q;
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a;
        b = a % 3;
        if(b == 0){
            vec0.push_back(a);
            continue;
        }
        if(b == 1){
            vec1.push_back(a);
            continue;
        }
        vec2.push_back(a);
    }
    int s0 = vec0.size(), s1 = vec1.size();
    for(int i = 0; i < q; i++){
        cin >> a;
        if(a <= s0){
            cout << vec0[a-1] << " ";
            continue;
        }
        if(a <= s1+s0){
            cout << vec1[a-s0-1] << " ";
            continue;
        }
        cout << vec2[a-(s1+s0)-1] << " ";
    }

    return 0;
}
