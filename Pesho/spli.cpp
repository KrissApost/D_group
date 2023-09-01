#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a;
    vector <long long> vec1;
    vector <long long> vec2;
    while(cin >> a) {
        if(a % 2 == 0) vec1.push_back(a);
        else vec2.push_back(a);
    }
    long long s = 0;
    for(int i = 0; i < n; i++) s+=abs(vec1[i] - vec2[i]);
    cout << s;

    return 0;
}
