#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[n], s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++){
        cin >> arr1[i] >> arr2[i];
        s1 += arr1[i];
        s2 += arr2[i];
    }
    for(int i = 0; i < m; i++){
        s1 -= arr1[i];
        s1 += arr2[i];
        s2 += arr1[i];
        s2 -= arr2[i];
    }
//    cout << k << " " << s1 << " " << s2 << endl;
    int k = 0;
    while(s1 != s2){
        if(m+k > n){
            cout << "N/A";
            return 0;
        }
        s1 += arr1[k];
        s1 -= arr2[k];
        s2 -= arr1[k];
        s2 += arr2[k];
        s1 -= arr1[k+m];
        s1 += arr2[k+m];
        s2 += arr1[k+m];
        s2 -= arr2[k+m];
        k++;
//        cout << k << " " << s1 << " " << s2 << endl;
    }
    cout << k+1;

    return 0;
}
