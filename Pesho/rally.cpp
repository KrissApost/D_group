#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int br[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        br[vec[i]]++;
    }
    if(br[vec[0]] == 2){
        cout << vec[0];
        br[vec[0]]--;
    }else{
        if(br[vec[0]] > 0){
            cout << vec[0];
            br[vec[0]] = 0;
        }
    }
    for(int i = 1; i < vec.size(); i++){
        if(br[vec[i]] == 2){
            cout << " " << vec[i];
            br[vec[i]]--;
        }else{
            if(br[vec[i]] > 0){
                cout << " " << vec[i];
                br[vec[i]] = 0;
            }
        }
    }

    return 0;
}

