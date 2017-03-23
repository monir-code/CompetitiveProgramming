#include<stdio.h>
int main()
{
    long n,x,y,T,j;
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%ld %ld %ld",&n,&x,&y);
        if((x<n) && (x%y!=0))
        {
            for(j=x;j<n;j++)
            {
                if((j%x==0) && (j%y!=0))
                    printf("%ld ",j);
            }
        }
        printf("\n");
    }
}
