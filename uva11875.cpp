#include<stdio.h>
int main()
{
    int a,b,c,t,n,ara[12];
    scanf("%d",&t);
    for(a=1;a<=t;a++)
    {
        scanf("%d",&n);
        for(b=0;b<n;b++)
            scanf("%d",&ara[b]);
        for(b=0;b<n-1;b++)
        {
            for(c=b+1;c<n;c++)
            {
                if(ara[b]>ara[c])
                {
                    ara[b]^=ara[c];
                    ara[c]^=ara[b];
                    ara[b]^=ara[c];
                }
            }
        }
        n=n/2;
        printf("Case %d: %d\n",a,ara[n]);
    }
}
