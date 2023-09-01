#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <char> v;
    char c;
    while(cin >> c){
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    do{
        for (int i = 0; i < v.size(); i++) cout << v[i];
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}
