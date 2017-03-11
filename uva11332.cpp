#include<stdio.h>
long long mape(long long a)
{
    long long s=0;
    while(a>0)
    {
        s+=a%10;
        a/=10;

    }
     if(s<10)return s;
        else mape(s);
}
int main()
{
    long long s,a,b,c;
    while(scanf("%lld",&a))
    {
        if(a==0) return 0;
        s=mape(a);
        printf("%lld\n",s);
    }
}
