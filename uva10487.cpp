#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,s,n,m,a,b,ar[10000],br[1001],cr[1001],dr[1001],d,e=1;
    while(scanf("%lld",&n))
    {
        if(n==0)return 0;
        for(i=0;i<n;i++)
            scanf("%lld",&ar[i]);
        scanf("%lld",&m);
        for(i=0;i<m;i++)
            scanf("%lld",&br[i]);
        d=0;
        for(i=0;i<m;i++)
        {
             cr[i]=ar[0]+ar[1];
             cr[i]-=br[i];
             if(cr[i]<0)cr[i]=-cr[i];

        }
        for(k=0;k<m;k++){
        for(i=0;i<n;i++)
        {
            for(j=0;j<n&&j!=i;j++)
            {
                s=ar[i]+ar[j];
                a=s;
                s-=br[k];
                if(s<0)s=-s;
                if(s<=cr[k])
                {dr[k]=a;
                  cr[k]=s;
                }

            }
        }
        }
        printf("Case %lld:\n",e);
        for(i=0;i<m;i++)
        {
            printf("Closest sum to %lld is %lld.\n",br[i],dr[i]);
        }
        e++;
    }
}
