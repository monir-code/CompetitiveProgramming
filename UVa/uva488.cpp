#include<stdio.h>
int main()
{
    long long t,n,i,j,a,k,l;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        scanf("%lld",&a);
        for(j=0;j<a;j++)
        {
            for(k=1;k<=n;k++)
            {
                for(l=0;l<k;l++)
                    printf("%lld",k);
                printf("\n");
            }
             for(k=n-1;k>=1;k--)
            {
                for(l=0;l<k;l++)
                    printf("%lld",k);
                   if(i==t-1&&j==a-1&&k==1)
                        break;
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}
