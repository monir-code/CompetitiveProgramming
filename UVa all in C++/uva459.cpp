#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[110][110],br[110],ln;
void dfs(ll i)
{
    if(br[i]==1)return;
    br[i]=1;
    for(ll j=1;j<=ln;j++)
    {
        if(ar[i][j]==1)
        {
            ar[i][j]=0;
            dfs(j);
        }
    }
    return;
}
int main()
{
    ll t;
    scanf("%lld\n\n",&t);
    while(t--)
    {
        ll a,b,c,i,j,k;
        char ch,st[10];
        //ch=getchar();
        cin >> ch;getchar();
        ln=ch-'A'+1;
        memset(ar,0,sizeof(ar));
        memset(br,0,sizeof(br));
        //printf("%lld\n",ln);
        for(i=1;i<=ln;i++)
            ar[i][i]=1;

        while(gets(st))
        {
            if(strlen(st)==0)break;
            ar[st[0]-'A'+1][st[1]-'A'+1]=1;
            ar[st[1]-'A'+1][st[0]-'A'+1]=1;
        }
        c=0;
        for(i=1;i<=ln;i++)
        {
            for(j=1;j<=ln;j++)
                if(ar[i][j]==1)
                {
                    c++;
                    dfs(i);
                }

        }
        printf("%lld\n",c);

       if(t>0)printf("\n");
    }
}
