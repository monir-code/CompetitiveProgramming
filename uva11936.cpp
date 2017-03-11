#include<stdio.h>
int main()
{
    int n,i,k,j,t,ara[4];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&ara[0],&ara[1],&ara[2]);
        for(j=0;j<2;j++)
            for(k=j+1;k<3;k++)
        {
            if(ara[j]<ara[k])
            {
                ara[j]^=ara[k];
                ara[k]^=ara[j];
                ara[j]^=ara[k];
            }
        }
        if(ara[0]>=ara[1]+ara[2])printf("Wrong!!\n");
        else printf("OK\n");
    }
}
