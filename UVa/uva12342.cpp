#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    long long n,i,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        scanf("%lf",&a);
        if(a>1180000)
        {
            b=a-1180000;
            b*=.25;
            c+=b;
            a=1180000;
        }
        if(a>880000)
        {
           b=a-880000;
            b*=.20;
            c+=b;
            a=880000;
        }
        if(a>480000)
        {
           b=a-480000;
            b*=.15;
            c+=b;
            a=480000;
        }
        if(a>180000)
        {
           b=a-180000;
            b*=.10;
            c+=b;
            a=180000;
        }
        if(c>floor(c))c=ceil(c);
        if(c>0&&c<2000)c=2000;
        printf("Case %lld: %.0lf\n",i,c);
    }
}
