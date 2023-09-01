#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
vector<tuple<int,int>> vec;
int arr[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        vec.push_back({a,i});
    }
    sort(vec.begin(), vec.end());
    int s = 0, k, last = get<0>(vec[0]), current;
    for(int i = 1; i < n; i++){
        current = get<0>(vec[i]);
        if(current == last){
            s++;
            k = get<1>(vec[i]);
            arr[k] = s;
        }else{
            s = 0;
            k = get<1>(vec[i]);
            arr[k] = s;
        }
        last = current;
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
