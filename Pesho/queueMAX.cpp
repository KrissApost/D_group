#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    queue<int> q;
    int n;
    cin >> n;
    vector<int> v;
    int ma = -1;
    for(int i = 0; i < n; i++){
        int t, x;
        cin >> t;
        if(t == 2){
            if(q.front() == ma){
                q.pop();
                ma = -1;
                queue<int> q2 = q;
                while(!q2.empty()){
                    if(ma < q2.front()){
                        ma = q2.front();
                    }
                    q2.pop();
                }
            }else{
                q.pop();
            }
        }else{
            cin >> x;
            q.push(x);
            if(ma < x){
                ma = x;
            }
        }
        cout << ma << " ";
    }

    return 0;
}
