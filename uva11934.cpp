#include<stdio.h>
int main()
{
    long long a,b,c, i,e,d,j,l,k;

    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l))
    {
        if(a==0&&b==0&&c==0&&d==0&&l==0)return 0;
        e=0;
        for(i=0;i<=l;i++)
        {
            if((a*i*i+b*i+c)%d==0)e++;
        }
            printf("%lld\n",e);
    }
}
