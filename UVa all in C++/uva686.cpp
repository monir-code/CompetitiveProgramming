#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <math.h>
ll prm(ll i)
{
   ll c,s,j;
            c=1;
            if(i%2==0)c=0;
            if(i==2)c=1;
            s=sqrt(i);
            for(j=3;j<=s;j++)
            {
                if(i%j==0)
                {
                    c=0;
                }
            }
            return c;

}
int main()
{
    ll a,b,c,f,i,j,k,d,s,e,ara[10000];
     while(scanf("%lld",&a))
    {

        if(a==0)return 0;
        b=3;
        e=a-3;
        ara[0]=3;
        ara[1]=a;
         f=0;
        while(b<=e)
        {
            c=prm(b);
              d=prm(e);
            if(c==1)ara[0]=b;
            if(d==1)ara[1]=e;
            if(ara[0]+ara[1]==a&&(ara[0]!=ara[2]||ara[1]!=ara[3]))
            {
              f++;
              b+=2;
              e-=2;
              ara[2]=ara[0];
              ara[3]=ara[1];
            }
            else if(ara[0]+ara[1]<a)
            {
                 b++;
            }

                else{
                    e--;
                }

        }
        if(a==4||a==5)
            cout << 1 << endl;
       else cout << f << endl;


    }

}


