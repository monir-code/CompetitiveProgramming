#include<stdio.h>
int main()
{
    int a,n,l,i,j,c,ara[60];
    scanf("%d",&n);
    while(n--)
    {
        c=0;
        scanf("%d",&l);
        for(i=0;i<l;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<l-1;i++)
        {
            for(j=i+1;j<l;j++)
                if(ara[i]>ara[j])
                {
                    c++;
                    ara[i]^=ara[j];
                    ara[j]^=ara[i];
                    ara[i]^=ara[j];
                }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
