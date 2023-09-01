#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

bool er[10000001];
int arr[10000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 2; i <= 3162; i++){
        if(!er[i]) for(int y = i+i; y <= 10000000; y+=i) if(er[y] == false) er[y] = true;
    }
    er[1] = true;
    er[0] = true;
    int n, m;
    cin >> n >> m;
    int mat[n+1][m+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> mat[i][j];
        }
    }
    long long arr[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            arr[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            arr[i][j] = arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1] + mat[i][j];
        }
    }
    int k = 0;
    for(int x1 = 1; x1 <= n; x1++){
        for(int y1 = 1; y1 <= m; y1++){
            for(int x2 = x1; x2 <= n; x2++){
                for(int y2 = y1; y2 <= m; y2++){
                    if(!er[arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1]]){
                        k++;
                    }
                }
            }
        }
    }
    cout << k;

    return 0;
}
