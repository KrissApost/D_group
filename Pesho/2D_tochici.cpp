#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int mat[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            mat[i][j] = 0;
        }
    }
    vector<pair<int,int>> v(k);
    for(int i = 0; i < k; i++){
        cin >> v[i].first >> v[i].second;
        mat[v[i].first][v[i].second] = 1;
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
    int ma = 0;
    for(int i = 0; i < k-1; i++){
        for(int j = i + 1; j < k; j++){
            int x1 = 1, y1 = 1, x2 = 1, y2 = 1;
            if(v[i].first != v[j].first && v[i].second != v[j].second){
                x1 = min(v[i].first,v[j].first);
                x2 = max(v[i].first,v[j].first);
                y1 = min(v[i].second,v[j].second);
                y2 = max(v[i].second,v[j].second);
            }else{
                if(v[i].first == v[j].first){
                    x2 = v[i].first;
                    x1 = 1;
                    y1 = min(v[i].second,v[j].second);
                    y2 = max(v[i].second,v[j].second);
                    if(arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1] > ma){
                        ma = arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1];
 //                       cout << 1 << endl;
                    }
 //                   cout << x1 << " " << y1 << " - " << x2 << " " << y2 << " = " << ma <<endl;
                    x1 = x2;
                    x2 = n;
                    if(arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1] > ma){
                        ma = arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1];
//                        cout << 2 << endl;
                    }
//                    cout << x1 << " " << y1 << " - " << x2 << " " << y2 << " = " << ma << endl;
                    continue;
                }
                if(v[i].second == v[j].second){
                    y2 = v[i].second;
                    y1 = 1;
                    x1 = min(v[i].first,v[j].first);
                    x2 = max(v[i].first,v[j].first);
                    if(arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1] > ma){
                        ma = arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1];
//                        cout << 1 << endl;
                    }
//                    cout << x1 << " " << y1 << " - " << x2 << " " << y2 << " = " << ma <<endl;
                    y1 = y2;
                    y2 = m;
                    if(arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1] > ma){
                        ma = arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1];
//                        cout << 2 << endl;
                    }
//                    cout << x1 << " " << y1 << " - " << x2 << " " << y2 << " = " << ma << endl;
                    continue;
                }
            }
            if(arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1] > ma){
                ma = arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1];
//                    cout << 3 << endl;
            }
//            cout << x1 << " " << y1 << " - " << x2 << " " << y2 << " = " << ma << endl;
        }
    }
    cout << ma;

    return 0;
}
