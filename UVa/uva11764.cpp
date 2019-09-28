#include<stdio.h>
int main()
{
    int t,n,i,j,a,b,ara[51];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        a=0;
        b=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&ara[j]);
        for(j=0;j<n-1;j++)
        {
            if(ara[j]<ara[j+1])
                a++;
            else if(ara[j]>ara[j+1])
                b++;

        }
          printf("Case %d: %d %d\n",i,a,b);
    }
}
