#include <bits/stdc++.h>
using namespace std;
const int cs = 1000000;
bool er[cs+1];
int arr[cs+1];
vector<int> pr(100000);

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    int n, r, c;
    cin >> n >> r >> c;
    vector<tuple<int,int>> vec;
    int mm = sqrt(cs);
    for(int i = 2; i <= mm; i++){
        if(!er[i]) for(int y = i*i; y <= cs; y+=i) if(!er[y]) er[y] = true;
    }
    int k = 2;
    pr[0] = 2;
    pr[1] = 3;
    for(int i = 1; i <= cs/6; i++){
        if(!er[6*i-1]){
            pr[k] = 6*i-1;
            k++;
        }
        if(!er[6*i+1]){
            pr[k] = 6*i+1;
            k++;
        }
    }
//    for(int i= 0; i < 1000; i++) cout << pr[i] << " ";
    int s, h, g;
    for(int i = 1; i <= n * n; i++){
        h = 0;
        s = 0;
        g = i;
        while(g != 1){
            if(!er[g]){
                h++;
                break;
            }
            if(g % pr[s] == 0){
                h++;
            }
            while(g % pr[s] == 0){
                g /= pr[s];
            }
            s++;
        }
        vec.push_back(make_tuple(h, i));
    }

//    for(int i = 0; i < vec.size(); i++) cout << get<0>(vec[i]) << "-" << get<1>(vec[i]) << " ";
    sort(vec.begin(), vec.end());
//    cout << endl;
//    for(int i = 0; i < vec.size(); i++) cout << get<0>(vec[i]) << "-" << get<1>(vec[i]) << " ";
    cout << get<1>(vec[(r-1)*n + c-1]);

    return 0;
}
