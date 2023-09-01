#include <bits/stdc++.h>
using namespace std;

int main()
{
    int uv,az,dv;
    int a,a1;
    char a2;
    char f;
    int b,b1;
    char b2;
    cin>>a>>a2>>a1>>f>>b>>b2>>b1;
    if(f=='+')
    {
        uv=b1*a1/__gcd(b1,a1);
        az=a*(uv/a1)+b*(uv/b1);
        dv=uv;

    }
    if(f=='-')
    {
        uv=b1*a1/__gcd(b1,a1);
        az=a*(uv/a1)-b*(uv/b1);
        dv=uv;
    }
    if(f=='*')
    {
        uv=b1*a1/__gcd(b1,a1);
        az=(uv/a1)*(uv/b1);
        dv=uv;

    }
    if(f=='/')
    {
        uv=b1*a1/__gcd(b1,a1);
        az=a*(uv/a1)/(b*(uv/b1));
        dv=uv;
    }
    int otg1=az/(__gcd(az,dv));
    int otg2=uv/(__gcd(az,dv));
    if(otg1<0 && otg2<0)
    {
        cout<<abs(az/(__gcd(az,dv)))<<'/'<<abs(uv/(__gcd(az,dv)));
        return 0;
    }
    if(otg1<0 || otg2<0)
    {
        cout<<"-"<<abs(az/(__gcd(az,dv)))<<'/'<<abs(uv/(__gcd(az,dv)));
        return 0;
    }
    cout<<abs(az/(__gcd(az,dv)))<<'/'<<abs(uv/(__gcd(az,dv)));
    return 0;
}
