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
    arr[1] = 0;
    for(int i = 2; i <= 10000000; i++) if(er[i] == false) arr[i]=arr[i-1] + 1; else arr[i]=arr[i-1];
    int n;
    cin >> n;
    int b, e;
    for(int i = 0; i < n; i++){
        cin >> b >> e;
        cout << arr[e]-arr[b-1] << endl;
    }
    return 0;
}
