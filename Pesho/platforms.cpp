#include <iostream>
using namespace std;
int arr[1001][1001] = {};
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }
    int k = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(arr[i][j] != arr[i-1][j] && arr[i][j] != arr[i][j-1]) k++;
        }
    }
    cout << k;

    return 0;
}
