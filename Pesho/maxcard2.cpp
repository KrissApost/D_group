#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <string> mask(4);
    for (int i = 0; i < 4; i++) cin >> mask[i];
    sort(mask.begin(),mask.end());
    string ma = "";
    do{
        string st = mask[0] + mask[1] + mask[2] + mask[3];
        if(st > ma){
            ma = st;
        }
    } while (next_permutation(mask.begin(), mask.end()));
    cout << ma;
    return 0;
}
