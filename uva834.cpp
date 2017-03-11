#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ar[100000],i;

int ss(ll a, ll b)
{


    ll c,d;
    if(b!=0)c=a/b;
    ar[i]=c;
    i++;
    if(b!=0)d=a%b;
    if(b==1)return 0;
        ss(b,d);

}

int main()
{
    ll a,b,c,d,j,k,l;

    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        i=0;
        ss(a,b);

       printf("[%lld;",ar[0]);

       for(j=1;j<i-1;j++)
            printf("%lld,",ar[j]);

            printf("%lld]\n",ar[j]);
    }


}
