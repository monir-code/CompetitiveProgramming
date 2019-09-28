#include<stdio.h>
int main()
{
    int a,b,c,j,i,t,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        s=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(j&1)s+=j;
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
