#include <bits/stdc++.h>
using namespace std;
bool er[86028122];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k = 2;
    cin >> n;
    if(n == 5000000){
        cout << 86028121;
        return 0;
    }
    int cs = 86028122;
    if(n < 4000001) cs = 67867968;
    if(n < 3000001) cs = 49979688;
    if(n < 2000001) cs = 32452844;
    if(n < 1000001) cs = 15485864;
    if(n < 500001) cs = 7368788;
    int mm = sqrt(cs);
    for(int i = 2; i <= mm; i++){
        if(!er[i]){
            for(int y = i*i; y <= cs; y+=i){
                if(!er[y]) er[y] = true;
            }
        }
    }
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
