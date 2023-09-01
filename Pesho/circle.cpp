#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector <int> vec(n);
    for(int i = 0; i < n; i++) vec[i] = i + 1;
    int s = vec.size(), k = 1;
    while(s > 1)
    {
        k += (q-1) % s;
        if(k > s) k -= s;
//        cout << vec[k-1] << " ";
        vec.erase(vec.begin()+k-1);
        s = vec.size();
    }
    cout << vec[0];
    return 0;
}

