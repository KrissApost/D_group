#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> br;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        cout << br[a]-1 << " ";
        br[a] = i+1;
    }

    return 0;
}
