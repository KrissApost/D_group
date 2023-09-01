#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long nok=a*b/(__gcd(a,b));
    cout<<nok/b;
    return 0;
}
