#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    vector<char> v;
    for (int i = 0; i < a.size(); i++) v.push_back(a[i]);
    do{
       for (int i = 0; i < a.size(); i++) cout << v[i] << " ";
       cout << endl;
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}
