#include <bits/stdc++.h>
using namespace std;
bool arr[100000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    vector <int> veca;
    vector <int> vecb;
    int k = 0;
    for(int y = 2; y <= a; y++){
        k = 0;
        while(a % y == 0){
            k++;
            a /= y;
            veca.push_back(y*k);
        }
    }
    for(int y = 2; y <= b; y++){
        k = 0;
        while(b % y == 0){
            k++;
            b /= y;
            vecb.push_back(y*k);
        }
    }


    return 0;
}
