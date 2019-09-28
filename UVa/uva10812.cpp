#include<stdio.h>
int main()
{
    long long i,t,a,b,s,d;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld%lld",&s,&d);
        a=(s+d)/2;
        b=s-a;
        if(s>=d&&a+b==s&&a-b==d) printf("%lld %lld\n",a,b);
        else printf("impossible\n");
    }
    return 0;
}
