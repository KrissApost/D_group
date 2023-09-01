#include <bits/stdc++.h>
using namespace std;
int cnt[10001];
bool er[10001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i = 2; i <= 100; i++){
        if(!er[i]) for(int y = i+i; y <= 10000; y+=i) if(er[y] == false) er[y] = true;
    }
    int n, a, k;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        k = a;
        if(a < 4){
            cnt[a]++;
            continue;
        }
        for(int y = 2; y <= a / 2; y++){
            if(!er[k]){
                cnt[k]++;
                break;
            }
            while(k % y == 0){
                k /= y;
                cnt[y]++;
            }
            if(k == 1){
                break;
            }
        }
    }
//    for(int i = 1; i < 100; i++) if(cnt[i] != 0) cout << i << " " << cnt[i] << "; ";
    int br = 1;
    for(int i = 0; i <= 10000; i++){
        if(i == 0){
            continue;
        }
        br *= (cnt[i]+1) % 10;
        br = br % 10;
    }
    cout << br;

    return 0;
}

