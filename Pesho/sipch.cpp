#include <bits/stdc++.h>
using namespace std;
const int cs = 10000000;
bool er[cs];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int mm = sqrt(cs);
    for(int i = 2; i <= mm; i++){
        if(!er[i]){
            for(int y = i+i; y <= cs; y+=i){
                if(!er[y]) er[y] = true;
            }
        }
    }
    int n;
    cin >> n;
    for(int i = 2; i < n; i++){
        if(!er[i]){
            cout << i << " ";
        }
    }

    return 0;
}

