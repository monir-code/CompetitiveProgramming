#include <stdio.h>
#include <math.h>
#define ll long long
ll m;
ll Pow(ll b,ll p)
{
    ll a;
    if(p==0)return 1;
    if((p%2)==1)a = (b%m*Pow(((b%m)*(b%m))%m,p/2)%m)%m;
    else
    a= Pow(((b%m)*(b%m))%m,p/2)%m;
    return a%m;
}

int main()
{
    ll b,p,a,c,d,i,j,k;
    while(scanf("%lld%lld%lld",&b,&p,&m)!=EOF){
    b=b%m;
    //p=p%m;
    a=Pow(b,p);
    a%=m;
    printf("%lld\n",a);
}
}
