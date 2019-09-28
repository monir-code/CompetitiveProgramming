#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <math.h>
ll prm(ll i)
{
   ll c,s,j;
            c=1;
            if(i%2==0)c=0;
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
    int a,b,c,i,j,k,d,s,e,ara[10000];
     while(scanf("%lld",&a))
    {

        if(a==0)return 0;
        b=3;
        e=a-3;
        ara[0]=3;
        ara[1]=a;

        while(ara[0]+ara[1]!=a)
        {
            c=prm(b);
            if(c==1)ara[0]=b;
            d=prm(e);
            if(d==1)ara[1]=e;
            if(ara[0]+ara[1]==a)
            {
            cout << a << " = " << ara[0] << " + " << ara[1] << endl;

            }
            else if(ara[0]+ara[1]<a)
            {
                 b++;
            }

                else{
                    e--;
                }
           if(b>e){
             cout << "Goldbach's conjecture is wrong." << endl;
             break;
           }
        }
    }

}

