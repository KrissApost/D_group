#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t[n + 1][n + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            t[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == 1 || i == 1){
                t[i][j] = 1;
                continue;
            }
            if(i < j){
                t[i][j] = t[i][i];
                continue;
            }
            if(i == j){
                t[i][j] = 1 + t[i][i - 1];
            }else{
                t[i][j] = t[i][j - 1] + t[i - j][j];
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    //cout << t[n][n];

    return 0;
}

