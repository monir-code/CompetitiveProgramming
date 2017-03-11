#include<stdio.h>
int main()
{
    long long a,b,n,i,j;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)return 0;
        b=0;
        for(i=1;i<=n;i++)
        {
            b+=(i*i);
        }
        printf("%lld\n",b);
    }
}
