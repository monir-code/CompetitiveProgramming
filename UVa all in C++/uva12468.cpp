#include<stdio.h>
int main()
{
    int a,b,c,d,n,m;
    while(scanf("%d%d",&a,&b))
    {
        if(a==-1&&b==-1)return 0;
        if(a<b)
        {
            c=b-a;
            d=a+100-b;
            (c<d)? printf("%d\n",c):printf("%d\n",d);
        }
        else if(a>b)
        {
            c=a-b;
            d=100-a+b;
            (c<d)? printf("%d\n",c):printf("%d\n",d);
        }
        else printf("0\n");
    }
}
