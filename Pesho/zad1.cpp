#include <bits/stdc++.h>
using namespace std;
int nd_ednak(int num[], int size) {
    int ng = 1 ;
    int sega = 1;
    int dulv = 1;
    int posled = num[0];
    for (int i = 1; i < size; i++) {
        if (num[i] > num[i-1]) {
            sega++;
            if (sega > ng) {
                ng = sega;
                dulv=sega;
                posled = num[i];
            }else if(sega==ng){
                posled=num[i];
            }
        } else {
            sega = 1;
        }
    }

    return dulv;
}
int nd_ednak2(int num[], int size) {
    int ng = 1 ;
    int sega = 1;
    int dulv = 1;
    int posled = num[0];
    for (int i = 1; i < size; i++) {
        if (num[i] > num[i-1]) {
            sega++;
            if (sega > ng) {
                ng = sega;
                dulv=sega;
                posled = num[i];
            }else if(sega==ng){
                posled=num[i];
            }
        } else {
            sega = 1;
        }
    }

    return posled;
}

void max_ednak(int num1[], int size1, int num2[], int size2) {
    int maxi1, maxi2;
    int posled1, posled2;

    maxi1 = nd_ednak(num1, size1);
    maxi2 = nd_ednak(num2, size2);
    posled1 = nd_ednak2(num1, size1);
    posled2 = nd_ednak2(num2, size2);
    if (maxi1 > maxi2) {
        cout << maxi1 << " ";
        cout << posled1 << endl;
    } else if (maxi2 > maxi1) {
        cout << maxi2 << " ";
        cout << posled2 << endl;
    } else {
        if (posled1 < posled2) {
            cout << maxi1 << " ";
            cout << posled1 << endl;
        } else {
            cout << maxi2 << " ";
            cout << posled2 << endl;
        }
    }
}

int main() {
    int size1, size2;
    int num1[30];
    int num2[30];
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> num1[i];
    }

    cin >> size2;
    for (int i = 0; i < size2; i++) {
        cin >> num2[i];
    }

    max_ednak(num1, size1, num2, size2);

    return 0;
}
