#include<bits/stdc++.h>
using namespace std;
int arr[20],n;
vector<int> v;
void rec(int h, int m){
    if(h == 0){
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i = m + 1; i < n - h + 1; i++){
        v.push_back(arr[i]);
        rec(h-1, i);
        v.pop_back();
    }
}
int main(){
    int k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    rec(k,-1);
    return 0;
}
