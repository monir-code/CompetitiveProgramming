#include<stdio.h>
int main()
{
    int T,l,c,m,n,i,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d %d",&l,&c,&m,&n);
        for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
            {
                if((j==n-1) || (i==m-1))
                    printf("*");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
}
