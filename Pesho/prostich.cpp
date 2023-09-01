#include <bits/stdc++.h>
using namespace std;
bool er[10000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i = 2; i <= 31622; i++){
        if(!er[i]) for(int y = i+i; y <= 10000000; y+=i) if(er[y] == false) er[y] = true;
    }
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        for(int i = a; i > 1; i--){
            if(!er[i] && a % i == 0){
                cout << i << " ";
                break;
            }
        }
    }

    return 0;
}

