#include<stdio.h>
int main()
{
    long l,c,i,j,T;
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%ld %ld",&l,&c);
        for(i=1;i<=l;i++)
        {
            for(j=1;j<=c;j++)
            {
                if((i==1 || i==l)||(j==1 || j==c))
                    printf("*");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
}
