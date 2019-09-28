#include <bits/stdc++.h>
using namespace std;
#define ll long long
 ll ar[10002];
ll as(ll n)
{

    ll c,s,i,j,k;
    c=0;
    for(i=n;c==0;i++)
    {
        c=1;
        s=sqrt(i);
      for(j=2;j<=s;j++)
            if(i%j==0){c=0;break;}

        if(c==1)
        {
           return i;}
    }
}

void prm()
{
    ll a,b,c,n,i,j,k;
    for(i=1;i<=10000;i++)
    {
        n=i/2+1;
        n=as(n);
        ar[i]=n;
    }
}
int main()
{
    ll n,t;
    prm();
    cin >> t;
    while(t--){
        cin >> n;
     printf("%lld\n",ar[n]);
    }
}
