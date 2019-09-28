#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll s;

void sum(ll p,ll q)
{
    if(p!=0)
    {
        while(p%10!=0)
        {
            s+=p%10;
            p++;
        }
    }

    if(q!=0)
    {
        while(q%10!=0)
        {
            s+=q%10;
            q--;
        }
    }
    s+=((q-p)/10)*45;

    if(p<=q&&q!=0)
        sum(p/10,q/10);

}

int main()
{
    ll a,b,c,d,m,n,p,q;

    while(scanf("%lld%lld",&p,&q))
    {
        if(p<0&&q<0)return 0;

        s=0;
        sum(p,q);
        printf("%lld\n",s);

    }
}
