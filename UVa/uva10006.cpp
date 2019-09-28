#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
ll prm(ll n)
{
    ll a,b,c,i,j,k;

    if(n==2)return 1;
    else if(n%2==0)
    {
        return 0;
    }
    ll m=sqrt(n);
    for(i=3;i<=m;i+=2)
    {
        if(n%i==0){
                return 0;
        }
    }
    return 1;
}

ll Pow(ll b,ll p)
{
    if(p==1)return b;

    if(p%2==0)return Pow(b*b,p/2);
    else return b*Pow(b*b,p/2);
}

int main()
{
    ll a,b,c,i,j,k,n,s;
    // while(scanf("%lld",&n)&&n){
    for(n=2;n<=65000;n++)
    {

        c=prm(n);

        if(c==0){

        for(a=2;a<n;a++)
        {
            s=1;
            for(i=0;i<n;i++)
            {
                s*=a;
                s%=n;
            }
            if(s!=a){
                c=1;
                break;
            }
        }

        }

        if(c==0)//printf("%lld is normal.\n",n);
        //else
            printf("The number %lld is a Carmichael number.\n",n);
     }
}
*/

int main()
{
    ll a,b,c,i,j,k,n,s;
     while(scanf("%lld",&n)&&n){

       if(n==561)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==1105)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==1729)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==2465)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==2821)printf("The number %lld is a Carmichael number.\n",n);

      else if(n==6601)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==8911)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==10585)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==15841)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==29341)printf("The number %lld is a Carmichael number.\n",n);

      else if(n==41041)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==46657)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==52633)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==62745)printf("The number %lld is a Carmichael number.\n",n);
      else if(n==63973)printf("The number %lld is a Carmichael number.\n",n);

      else printf("%lld is normal.\n",n);
     }
}
