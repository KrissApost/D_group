#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, cnt = 0;
    cin >> N;
    vector <int> mask;
    for (int i = 0; i < N; i++) mask.push_back(i);
    do{
       for (int i = 0; i < N; i++) cout << mask[i] << " ";
       cout << endl;
       cnt++;
    } while (next_permutation(mask.begin(), mask.end()));
    cout << cnt;
    return 0;
}
