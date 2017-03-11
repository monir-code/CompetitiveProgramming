#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[1000001];

void prm()
{
    ll i,j,k;
    for(i=4;i<=1000000;i+=2)
    {
        ar[i]=1;
    }
    for(i=3;i<=1000001;i+=2)
    {
        if(ar[i]==0)
        for(j=i+i;j<=1000001;j+=i)
        {
         ar[j]=1;
        }
    }
}

int main()
{
   //ar[1000001]={0};
   ar[0]=1;
   ar[1]=1;
   ar[2]=0;
   prm();
   ll n,i,j,k,c,a;

   while(scanf("%lld",&n)&&n)
   {
       if(n<2)printf("%lld:\nNO WAY!\n",n);
       else if(ar[n-2]==0)printf("%lld:\n2+%lld\n",n,n-2);
       else{
            c=0;
           a=n/2+1;
            for(i=3;i<=a;i+=2)
            {
                if(ar[i]==0&&ar[n-i]==0)
                {
                    c=1;
                    printf("%lld:\n%lld+%lld\n",n,i,n-i);
                    break;
                }
                if(c==1)break;
            }
            if(c==0)printf("%lld:\nNO WAY!\n",n);



       }
   }
}














