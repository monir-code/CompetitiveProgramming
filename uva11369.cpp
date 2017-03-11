#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,i,ar[100000],s;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);
        }
        sort(ar,ar+n);
        reverse(ar,ar+n);
        s=0;
        for(i=0;i<n;i++)
        {
            //printf("%lld ",ar[i]);
            if(i%3==2)s+=ar[i];
        }
        printf("%lld\n",s);
    }
}
