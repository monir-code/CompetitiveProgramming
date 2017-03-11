#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,d=1;
    while(scanf("%lld",&n)&&n){
    ll a,b,c,ar[110][110],i,j,k,br[110]={0},h,m;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%lld",&ar[i][j]);
        printf("Case %lld:",d);
        d++;
    a=0;b=n-1;
    if(n%2==0)h=n/2;
    else h=n/2+1;
    c=h;
    m=0;
    while(h--){

    for(i=a;i<=b;i++)
    {
        for(j=a;j<=b;j++)
        {
            if(i==a||j==b||i==b||j==a){
                    br[m]+=ar[i][j];
                    //printf("%lld ",ar[i][j]);
            }
        }
    }
    //printf("\n");
    a++;
    b--;
    m++;
    }
    h=c;
    for(i=0;i<h;i++)
        printf(" %lld",br[i]);
        printf("\n");
    }
}
