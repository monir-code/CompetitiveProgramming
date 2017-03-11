/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[11000][1100];
int main()
{
      ll a,b,c,d,i,j,k,l,ma,s,p,n,m;

      scanf("%lld",&n);
      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
                  scanf("%lld",&ar[i][j]);
          }
      }
      c=0;
      ma=ar[0][0];
      for(p=0;p<n;p++){

      for(m=0;m<n;m++){

      for(k=0;k<n;k++){

      for(l=0;l<n;l++){

      for(i=p;i<=k;i++)
      {
          for(j=m;j<=l;j++)
          {
              c++;
              if(i==p&&j==m)s=0;
              s+=ar[i][j];
          }
      }
      if(s>ma)ma=s;

      }
      }
      }
      }
      printf("%lld %lld\n",ma,c);

}
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ar[110][110],d[110];

ll msub(ll *b,ll n)
{
    ll i,s=INT_MIN,m;
    m=s;

    for(i=0;i<n;i++)
    {
        if(s<0)s=b[i];
        else s+=b[i];
        if(s>m)m=s;
    }
    return m;
}


ll mas(ll n)
{
    ll s=INT_MIN;
    ll m=s;
    ll i,j,k,x,y;
    for(x=0;x<n;x++)
    {
        memset(d,0,sizeof(d));
        for(j=x;j<n;j++)
        {
            for(i=0;i<n;i++)
            {
                d[i]+=ar[i][j];
            }
            s=msub(d,n);
            printf(" %lld  ",s);
             if(s>m)m=s;
        }

    }
    return m;
}


int main()
{
    ll i,j,n,m;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%lld",&ar[i][j]);
    }

    m=mas(n);
    printf("%lld\n",m);
}
















