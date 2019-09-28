#include<stdio.h>
int main()
{
    long long t,n,m,r,s,i;
    while(scanf("%lld",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            scanf("%lld%lld",&n,&m);
            r=(n/3)*(m/3);
            printf("%lld\n",r);
        }
    }
    return 0;
}
