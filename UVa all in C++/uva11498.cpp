#include<stdio.h>
int main()
{
    int t,a,b,m,n,p,q,i;
    while(scanf("%d",&t))
    {
        if(t==0)return 0;
        scanf("%d%d",&p,&q);
        for(i=0;i<t;i++)
        {
            scanf("%d%d",&m,&n);
            if(m==p||n==q)printf("divisa\n");
            else if(m>p&&n>q)printf("NE\n");
            else if(m<p&&n>q)printf("NO\n");
            else if(m>p&&n<q)printf("SE\n");
            else if(m<p&&n<q)printf("SO\n");
        }
    }
    return 0;
}
