#include <bits/stdc++.h>
using namespace std;
bool er[10000001];
int arr[10000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, q;
    cin >> N >> q;
    vector<int> pr(1000000);
    int mm = sqrt(N);
    for(int i = 2; i <= mm; i++){
        if(!er[i]) for(int y = i*i; y <= N; y+=i) if(!er[y]) er[y] = true;
    }
    int k = 2;
    pr[0] = 2;
    pr[1] = 3;
    for(int i = 1; i <= N/6; i++){
        if(!er[6*i-1]){
            pr[k] = 6*i-1;
            k++;
        }
        if(!er[6*i+1]){
            pr[k] = 6*i+1;
            k++;
        }
    }
    int n, s;
    for(int r = 1; r <= N; r++){
        arr[r] = arr[r-1];
        n = r;
        s =- 0;
        if(r < 4){
            arr[r] = arr[r-1] + 1;
        }else{
            while(n != 1){
                if(!er[n]){
                    arr[r]++;
                    break;
                }
                while(n % pr[s] == 0){
                    n /= pr[s];
                    arr[r]++;
                }
                s++;
            }
        }
    }

//    for(int i = 0; i <= N; i++) cout << arr[i] << " ";
    int a, b;
    for(int i = 0; i < q; i++){
        cin >> a >> b;
        cout << arr[b] - arr[a-1] << "\n";
    }

    return 0;
}
