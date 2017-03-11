#include<stdio.h>
int main()
{
    int s,a,b,c,d,e;
    int t,i,j,k,ara[4],g,u;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        for(j=0;j<3;j++)
            scanf("%d",&ara[j]);
        for(k=0;k<2;k++)
            for(j=k+1;j<3;j++)
            if(ara[k]<ara[j])
        {
            ara[k]^=ara[j];
            ara[j]^=ara[k];
            ara[k]^=ara[j];
        }
        g=(ara[0]+ara[1]);
        e=g/2;
        s=a+b+c+d+e;
        u=s;
        if(u>=90)printf("Case %d: A\n",i);
        else if(u>=80)printf("Case %d: B\n",i);
        else if(u>=70)printf("Case %d: C\n",i);
        else if(u>=60)printf("Case %d: D\n",i);
        else printf("Case %d: F\n",i);
    }
}
