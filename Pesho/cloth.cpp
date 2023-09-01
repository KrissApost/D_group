#include <bits/stdc++.h>
using namespace std;

int main()
{
    int const SQ = 500000;
    int n;
    cin >> n;
    unsigned int a, b, m[SQ] = {0}, x, y, maxSQ = 0;
    for(int i=0; i < n; i++)
    {
        cin >> a >> b;
        x = a;
        y = b;
        while (a != b)
        {
            if (a>b)
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
        m[a] += x / a * y / a;
    }
    for(int i= 0; i < SQ; i++)
    {
        if(m[i] != 0)
        {
            cout << i << " " << m[i] << endl;
        }
    }
    return 0;
}
