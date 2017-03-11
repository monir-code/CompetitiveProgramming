#include <bits/stdc++.h>
using namespace std;

#include<math.h>
#define ll long long

int prm(ll n)
{
    ll c=1,s,i,j;
    if(n%2==0)c=0;
    if(n==2)c=1;
    s=sqrt(n);
    for(i=3;i<=s;i++)
    {
        if(n%i==0){c=0;
        break;
        }

    }
    return c;
}

int main()
{
    ll e,a,b,c,d,i,j,k;
   while(scanf("%lld",&a)){
        if(a==0)return 0;
    c=prm(a);
    if(c==1)printf("0\n");
    else{
            i=a;
            j=a;
        while(1)
        {
            i++;
            d=prm(i);
            if(d==1)break;
        }
        while(1)
        {
            j--;
            e=prm(j);
            if(e==1)break;
        }
        k=i-j;
        cout << k << endl;
    }

}
}
