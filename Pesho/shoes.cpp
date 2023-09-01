#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<pair<int,char>,int> shoes;
    int l1, r1;
    char l2, r2;
    for(int i = 0; i < n; i++){
        cin >> l1 >> l2 >> r1 >> r2;
        shoes[{l1,l2}]++;
        shoes[{r1,r2}]--;
    }
    int k = 0;
    for(auto p: shoes){
        cout << p.first.first << " " << p.first.second << " " << p.second << endl;
        k+=abs(p.second);
    }
    cout << k;

    return 0;
}
