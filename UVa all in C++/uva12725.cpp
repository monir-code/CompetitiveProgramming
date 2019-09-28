#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,m,a,b,c,j,k,d;
    int t,i;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> n>> m >> a >> b;
        c=m*(a+b);
        d=n*a;
        c-=d;
        c/=b;
        if(c>10||c<0)printf("Case #%d: Impossible\n",i);
        else printf("Case #%d: %.2lf\n",i,c);
    }
}
