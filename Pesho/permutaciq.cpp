#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int j, a[n], len[n];
    for(int i = 0 ; i < n ; i++) {
        cin>>len[i];
        a[i]=0;
    }
    while(true){
        for(int i = 0; i< n; i++) cout << a[i] << " ";
        cout << endl;
        for(j = 0; j < n; j++) {
            a[j]++;
            if(a[j] <= len[j]) break;
            else a[j] = 0;
        }
        if(j >= n) break;
    }


    return 0;
}
