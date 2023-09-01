#include <bits/stdc++.h>
using namespace std;
bool arr[101] = {false};

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int s = 0;
    for(int i = a; i < b; i++) arr[i] = true;
    for(int i = c; i < d; i++) arr[i] = true;
    for(int i = 1; i < 101; i++) if(arr[i]) s++;
    cout << s;

   return 0;
}

