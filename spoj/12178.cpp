#include<stdio.h>
int main()
{
    long a,b,l,c,i,j,T;
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%ld %ld",&a,&b);
        l=3*a+1;
        c=3*b+1;
        for(i=1;i<=l;i++)
        {
            for(j=1;j<=c;j++)
            {
                if((i%3==1) || (j%3==1))
                    printf("*");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
}
