#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int m = 1000000007;
vector<int> v[1001];
long long dp[1001][1001];
bool arr[1001][1001];
bool is(int a, int b){
    int d = 0;
    while(a != 0 || b != 0){
        if(a % 10 != b % 10){
            d++;
        }
        a /= 10;
        b /= 10;
    }
    if(d == 1){
        return true;
    }
    return false;
}
void func(int c){
    for(int i = 1; i <= c; i++){
        for(int y = y + 1; y <= c; y++){
            if(is(i,y)){
                v[]
            }
        }
    }
}
int main() {
    int n, c;
    cin >> n >> c;


    return 0;
}
