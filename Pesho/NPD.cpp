#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
bool er[1000001];
vector <int> vec;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 2; i <= 1000; i++) if(!er[i]) for(int y = i+i; y <= 1000000; y+=i) if(er[y] == false) er[y] = true;
    for(int i = 2; i <= 500000; i++) if(!er[i]) vec.push_back(i);
    int n, vs = vec.size();
    cin >> n;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(er[a] == false){
            cout << a << " ";
        }else{
            for(int y = 0; y < vs; y++){
                if(a % vec[y] == 0){
                    a /= vec[y];
                    y--;
                }
                if(!er[a]){
                    cout << a << " ";
                    break;
                }
            }
        }
    }
    return 0;
}

