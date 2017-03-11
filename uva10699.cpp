#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll ara[100000],p[100000]={1};
void prm()
{
    ll a,b,c,i,j,s;
    p[0]=0;p[1]=0;p[2]=1;
    a=1;
    ara[0]=2;
    for(j=3;j<=500001;j+=2)
    {
        s=sqrt(j);
        c=1;
        for(i=2;i<s;i++)
        {
            if(j%i==0)c=0;
        }
        if(c==1){ara[a]=j;
         a++;
        }
    }
}
int main()
{
    ll n,a,b,c,i,j,k;
     prm();
    while(scanf("%lld",&n))
    {

        k=n;
        if(n==0)return 0;
        a=0;
        c=0;
        while(1)
        {
            if(n%ara[a]==0)c++;
               b=ara[a];
            while(n%ara[a]==0)
            {
                n/=ara[a];

            }
            a++;
            if(n==1||b==499979)break;
        }
        if(c==0)c++;
        cout << k << " : " << c << endl;

    }
}
