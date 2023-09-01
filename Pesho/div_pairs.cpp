#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k = 0;
    cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        for(int j = i - 1; j >= 0; j--){
            if(vec[i] % vec[j] == 0 || vec[j] % vec[i] == 0){
                k++;
//                cout << vec[i] << " " << vec[j] << endl;
            }
        }
    }
    cout << k;

    return 0;
}

