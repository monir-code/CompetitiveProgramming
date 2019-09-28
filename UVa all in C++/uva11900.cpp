#include<stdio.h>
int main()
{
    int ara[33],k,c,s,t,n,p,q,i,j;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d%d%d",&n,&p,&q);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
            if(ara[i]>ara[j])
        {
            ara[i]^=ara[j];
            ara[j]^=ara[i];
            ara[i]^=ara[j];
        }
        c=0;
        s=0;
        for(i=0;i<n;i++)
        {
            s+=ara[i];
            c++;
            if(s>=q||c==p)
            {
                if(s>q)c--;
                break;
            }

        }
        printf("Case %d: %d\n",k,c);
    }
}
