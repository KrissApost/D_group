#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string st;
        cin >> st;
        for(int y = 0; y < st.length(); y++) if (st[y] == '.') st[y] = ' ';
        stringstream ss;
        ss << st;
        int d, m, g;
        ss >> d >> m >> g;
        int diff;
        cin >> diff;
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
    }

    return 0;
}
