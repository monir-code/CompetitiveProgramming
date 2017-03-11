#include<stdio.h>
int main()
{
    int a,b,c,d,r,i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&r);
        a=(-45*r)/20;
        b=(30*r)/20;
        c=(55*r)/20;
        d=-b;
        printf("Case %d:\n%d %d\n",i,a,b);
        printf("%d %d\n",c,b);
        printf("%d %d\n",c,d);
        printf("%d %d\n",a,d);
    }
}
