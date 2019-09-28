#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,i,j,k,n,m;
    while(scanf("%lld%lld",&n,&m)&&n&&m)
    {
        char ch[110][110];
        getchar();
        for(j=0;j<=m+1;j++)ch[0][j]='.';
        for(j=0;j<=m+1;j++)ch[n+1][j]='.';

        for(j=0;j<=n+1;j++)ch[j][0]='.';
        for(j=0;j<=n+1;j++)ch[j][m+1]='.';

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                ch[i][j]=getchar();
                getchar();
        }
        c=0;
        //d=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                {

                   if(ch[i][j]=='*'&&ch[i-1][j-1]!='*'&&ch[i-1][j]!='*'&&ch[i-1][j+1]!='*'&&ch[i][j+1]!='*'&&ch[i+1][j+1]!='*'&&ch[i+1][j]!='*'&&ch[i+1][j-1]!='*'&&ch[i][j-1]!='*')
                   {
                       c++;//printf("%lld %lld\n",i,j);
                   }
                   //d++;
                }
        }
        printf("%lld\n",c,d);

    }

}
