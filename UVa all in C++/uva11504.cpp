#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[100010];
vector <ll>ve[100010];
stack<ll>st;
void dfs2(ll i)
{
    ar[i]=true;
    ll j,a=ve[i].size();
    for(j=0;j<a;j++)
    {
        if(!ar[ve[i][j]])
            dfs2(ve[i][j]);
    }
}
void dfs(ll i)
{
    ar[i]=true;
    ll j,a=ve[i].size();
    for(j=0;j<a;j++)
    {
        if(!ar[ve[i][j]])
            dfs(ve[i][j]);
    }
    st.push(i);
}


int main()
{
    ll t,n,m,i,a,b,s;
    scanf("%lld",&t);
    while(t--)
    {
        memset(ve,false,sizeof ve);
        memset(ar,false,sizeof ar);
        scanf("%lld%lld",&n,&m);

        for(i=0;i<m;i++)
        {
           scanf("%lld%lld",&a,&b);
           ve[a].push_back(b);
        }
        s=0;
        for(i=1;i<=n;i++)
        {
            if(!ar[i])
            {
                dfs(i);
            }

        }
         memset(ar,false,sizeof ar);
          s=0;
         while(!st.empty())
        {
             a=st.top();st.pop();
             if(!ar[a])
             {
                 dfs2(a);
                 s++;
             }
        }


         printf("%lld\n",s);
    }
}

