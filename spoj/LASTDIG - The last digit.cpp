#include<bits/stdc++.h>
using namespace std;
long long bigmod(long long a,long long p)
{
    long long x=a,res=1;
    while(p)
    {
        if(p&1)
            res=((res%10)*(x%10))%10;
        x=((x%10)*(x%10))%10;
        p>>=1;
    }
    return res;
}
int main()
{
    long long T,n,p,x;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld %lld",&n,&p);
        x=bigmod(n,p);
        printf("%lld\n",x);
    }
}
