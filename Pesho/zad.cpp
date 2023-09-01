#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, br = 0, m = 0, r;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int y = 1; y * y < i; y++){
            if(i % y == 0){
                br += 2;
            }
        }
        if(sqrt(i) == trunc(sqrt(i))) br++;
        if(br > m){
            m = br;
            r = i;
        }
        br = 0;
    }
    cout << r <<  "\n" << m;

    return 0;
}

