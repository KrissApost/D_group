#include <bits/stdc++.h>
using namespace std;

int main() {
    string st;
    cin >> st;
    int d1 = 1, m1 = 1, g1 = 2019;
    for(int y = 0; y < st.length(); y++) if (st[y] == '/') st[y] = ' ';
    stringstream ss;
    ss << st;
    ss >> d >> m >> g;
    int diff;
    cin >> diff;
    int k = 0;
    while(d1 != d && m1 != m && g1 != g){
        d1++;
        if(g1 % 4 != 0 || (g1 % 100 == 0 && g1 % 400 != 0)){
            if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12){
                if(d1 > 31){
                    d1 -= 31;
                    m1++;
                }
            }else{
                if(m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
                    if(d1 > 30){
                        d1 -= 30;
                        m1++;
                    }
                }else{
                    if(d1 > 28){
                        d1 -= 28;
                        m1++;
                    }
                }
            }
            if(m1 > 12){
                m1 -= 12;
                g1++;
            }
        }else{
            if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12){
                if(d1 > 31){
                    d1 -= 31;
                    m1++;
                }
            }else{
                if(m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
                    if(d1 > 30){
                        d1 -= 30;
                        m1++;
                    }
                }else{
                    if(d1 > 29){
                        d1 -= 29;
                        m1++;
                    }
                }
            }
            if(m1 > 12){
                m1 -= 12;
                g1++;
            }
        }
        k++;
    }

    for(int j = 0; j < diff; j++){
        d++;
        if(g % 4 != 0 || (g % 100 == 0 && g % 400 != 0)){
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
                if(d > 31){
                    d -= 31;
                    m++;
                }
            }else{
                if(m == 4 || m == 6 || m == 9 || m == 11){
                    if(d > 30){
                        d -= 30;
                        m++;
                    }
                }else{
                    if(d > 28){
                        d -= 28;
                        m++;
                    }
                }
            }
            if(m > 12){
                m -= 12;
                g++;
            }
        }else{
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
                if(d > 31){
                    d -= 31;
                    m++;
                }
            }else{
                if(m == 4 || m == 6 || m == 9 || m == 11){
                    if(d > 30){
                        d -= 30;
                        m++;
                    }
                }else{
                    if(d > 29){
                        d -= 29;
                        m++;
                    }
                }
            }
            if(m > 12){
                m -= 12;
                g++;
            }
        }
    }
    cout << d << "." << m << "." << g << endl;

    return 0;
}

