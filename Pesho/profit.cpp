#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> vec1(n);
    vector <int> vec2(m);
    for(int i = 0; i < n; i++){
        cin >> vec1[i];
    }
    for(int i = 0; i < m; i++){
        cin >> vec2[i];
    }
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    int s = 0;
    for(int i = 0; i < min(n, m); i++){
        s+=vec1[(n-1)-i] * vec2[(m-1)-i];
    }
    cout << min(n, m) << " " << s;

    return 0;
}
