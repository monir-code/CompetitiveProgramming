#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,n,i,j,k,m,ara[102][102];
    cin >> a;

    for(k=1;k<=a;k++){
            getchar();getchar();getchar();getchar();
    cin >> n;
    //scanf("N = %lld",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin >> ara[i][j];
        }
        m=n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
              d=0;
                b=n-1-i;c=n-1-j;
      //printf("%lld %lld , %lld %lld %lld %lld\n",i,j,b,c,ara[i][j],ara[b][c]);
                if(ara[i][j]!=ara[b][c]||ara[i][j]<0)
                {
                    d=1;
                    break;
                }
                if(d==1)break;
            }
            if(d==1)break;
            m--;
        }
        printf("Test #%lld:",k);
        if(d==1)printf(" Non-symmetric.\n");
        else printf(" Symmetric.\n");

    }

}
