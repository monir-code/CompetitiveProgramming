#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t=1,n,r,c;
    while(scanf("%lld%lld",&r,&n))
    {
        if(n==0&&r==0)return 0;
        c=r%n;
        n=r/n;
        if(c==0)n--;
        if(n>26)printf("Case %lld: impossible\n",t);
        else printf("Case %lld: %lld\n",t,n);
        t++;
    }
}
