#include <bits/stdc++.h>
using namespace std;
bool arr[100000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int k = 0;
    int a;
    for(int i = 0; i < n; i++){
        int r;
        cin >> a;
        r = a;
        for(long long y = 2; y * y <= r; y++){
            if(arr[y]) {
                while(a % y == 0){
                    a /= y;
                }
            }else{
                bool f = false;
                while(a % y == 0){
                    a /= y;
                    f = true;
                    arr[y] = true;
                }
                if(f){
                    k++;
                    cout << r << " - "<< y << " ";
                }
                f = false;
            }
        }
        if(a % r == 0 && !arr[r]){
            k++;
        }
    }
    cout << k;

    return 0;
}

