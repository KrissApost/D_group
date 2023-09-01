#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a % 2 == 0)vec.push_back(a);
    }
    int s;
    s = (vec.size()) / 2;
    if(vec.size() % 2 != 0) s++;
    cout << vec[s-1];

    return 0;
}
