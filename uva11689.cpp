#include<stdio.h>
int main()
{
    int n,i,j,a,b,d,e,f,c;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d%d%d",&a,&b,&c);
        d=a+b;
        e=0;
        f=0;
        while(d>0)
        {
            d+=f;
            e+=d/c;
            f=d%c;
            d/=c;
        }
        printf("%d\n",e);
    }
}
