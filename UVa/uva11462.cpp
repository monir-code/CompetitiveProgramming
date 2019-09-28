#include<stdio.h>
int main()
{
    long long m,a,b,c,i,j,k,n;
    char ara[2000001];
    while(scanf("%lld",&a))
    {
        if(a==0)return 0;
        m=0;
        for(i=0;i<a;i++)
            scanf("%lld",&ara[i]);
        for(i=1;i<111;i++)
        {
            for(j=0;j<a;j++)
            {
                if(ara[j]==i&&m<a-1){
                     printf("%lld ",i);
                     m++;
                }
                  else if(ara[j]==i&&m==a-1)
                     printf("%lld\n",i);
            }

        }
        }
        return 0;

    }

