#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
bool br[300001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    queue<int> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int t, x;
        cin >> t;
        cin >> x;
        if(t == 2){
            br[x] = 1;
        }else{
            q.push(x);
        }
        while(!q.empty() && br[q.front()] != 0){
            q.pop();
        }
        if(q.empty()){
            cout << "-1 ";
            continue;
        }
        cout << q.front() << " ";
    }

    return 0;
}
