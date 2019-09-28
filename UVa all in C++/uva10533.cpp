#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[1000001],br[10000]={0},c=0;
void isprm()
{
    //memset(ar,1,sizeof(ar));
    ll a,b,c,n,i,j,k;
    ar[0]=1;
    ar[1]=1;
    ar[2]=0;
    for(i=4;i<=1000000;i+=2)ar[i]=1;
    for(i=3;i<=1000;i+=2)
    {
        if(ar[i]==0)
        for(j=i+i;j<=1000000;j+=i)
            ar[j]=1;
    }
}
void prm()
{
    br[2]=1;br[3]=1;br[5]=1;br[7]=1;br[11]=1;br[13]=1;br[17]=1;br[19]=1;
    br[23]=1;br[29]=1;br[31]=1;br[37]=1;br[41]=1;br[43]=1;br[47]=1;br[53]=1;
}
ll ab(ll n)
{
    ll s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
     prm();
     isprm();
     ll a,b,i,j,k,n;


     c=0;
     for(i=0;i<=1000000;i++)
     {
        if(ar[i]==0){
            a=ab(i);
            if(br[a]==1)c++;
        }
        ar[i]=c;
     }
    // for(i=2;i<=100;i++)
     //printf("%lld %lld \n",i,ar[i]);
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a>b)swap(a,b);
        c=ar[b]-ar[a-1];
        //printf("%lld  %lld\n",ar[b],ar[a-1]);
        printf("%lld\n",c);
    }
}
