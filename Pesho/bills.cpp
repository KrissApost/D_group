#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> vec1;
    vector<int> vec2;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        vec1.push_back(x);
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        vec2.push_back(x);
    }
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    int k = 0;
    for(int i = 0; i < m; i++){
        while(vec2[i] > vec1[k]){
            cout << vec1[k] << " ";
            k++;
        }
        k++;
    }
    for(int i = k; i < n; i++){
        cout << vec1[i] << " ";
    }

    return 0;
}

