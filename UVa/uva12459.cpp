#include<stdio.h>
#define ll long long
ll ara[88];
ll fibo(ll n)
{
        if(n==1)
        return 1;
    else if(n==2)
    return 2;
    ll &r=ara[n];
    if(r!=-1)
        return r;
        r=fibo(n-1)+fibo(n-2);
        return r;
}


int main()
{
    ll a,b,i,c;
    while(scanf("%lld",&a))
    {
        for(i=0;i<=a;i++)
            ara[i]=-1LL;
        if(a==0)return 0;

        c=fibo(a);
        printf("%lld\n",c);
    }
}
