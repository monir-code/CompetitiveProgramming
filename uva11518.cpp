#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>ve[100000];
ll ar[100000],c,n;

void dfs(ll i)
{
    if(!ar[i]){
            ar[i]=1;
         c++;

    ll j=ve[i].size(),k;

    for(k=0;k<j;k++)
    {
        if(!ar[ve[i][k]])dfs(ve[i][k]);
    }

   }
}

int main()
{
    ll t;
    scanf("%lld",&t);
    //getchar();
    while(t--)
    {
        ll m,l,i,j,k,a,b;

        scanf("%lld%lld%lld",&n,&m,&l);
        memset(ar,0,sizeof(ar));
        memset(ve,0,sizeof ve);

        c=0;
        for(i=0;i<m;i++)
        {
            scanf("%lld%lld",&a,&b);
            ve[a].push_back(b);
        }
        for(i=0;i<l;i++)
        {
            scanf("%lld",&a);
            dfs(a);
        }

        printf("%lld\n",c);

    }
}
