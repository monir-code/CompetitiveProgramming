#include<stdio.h>
int main()
{
    int a,b,t,i,j,ara[4];
    scanf("%d",&t);
    for(a=1;a<=t;a++)
    {
        scanf("%d%d%d",&ara[0],&ara[1],&ara[2]);
        for(i=0;i<2;i++)
            for(j=i+1;j<3;j++)
            if(ara[i]>ara[j])
        {
            ara[i]^=ara[j];
            ara[j]^=ara[i];
            ara[i]^=ara[j];
        }
        printf("Case %d: %d\n",a,ara[1]);

    }
}
