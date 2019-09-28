#include<stdio.h>
int main()
{
   long long a,n,s;
   long long i;
    while(scanf("%lld",&n))
    {
        s=1;
        if(n<0) break;
        for(i=1;i<=n;i++)
        {
            s+=i;
        }
        printf("%lld\n",s);
    }
    return 0;
}
