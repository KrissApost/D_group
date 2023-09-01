#include <bits/stdc++.h>
using namespace std;

int main() {
    string st;
    cin >> st;
    for (int i = 0; i < st.length(); i++ ) if (st [i] == '.') st[i] = ' ';
    stringstream ss;
    ss << st;
    int d, m, y;
    ss >> d >> m >> y;
    cout << endl << d << "-"<< m << "-" << y;

   return 0;
}
