#include<stdio.h>
int main()
{
    long long i,j,l,c,T;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld %lld",&l,&c);
        for(i=1;i<=l;i++)
        {
            for(j=1;j<=c;j++)
            {
                if(i%2==1)
                {
                    if(j%2==1)
                        printf("*");
                    else
                        printf(".");
                }
                else
                {
                    if(j%2==1)
                        printf(".");
                    else
                        printf("*");
                }
            }
            printf("\n");
        }
    }
}
