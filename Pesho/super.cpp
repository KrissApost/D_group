#include <bits/stdc++.h>
using namespace std;
const int cs = 86028122;
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
    int n, k = 2;
    cin >> n;
    if(n == 1){
        cout << 2;
        return 0;
    }
    if(n == 2){
        cout << 3;
        return 0;
    }
    for(int i = 1; i <= cs / 6; i++){
        if(!er[6*i-1]) k++;
        if(k == n){
            cout << 6*i-1;
            return 0;
        }
        if(!er[6*i+1]) k++;
        if(k == n){
            cout << 6*i+1;
            return 0;
        }
    }

    return 0;
}
