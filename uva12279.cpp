#include<stdio.h>
int main()
{
    int t,n,i,a,b=1,ara[1001];
    while(scanf("%d",&t))
    {
        if(t==0)return 0;
        a=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]==0)a--;
            else a++;
        }
        printf("Case %d: %d\n",b,a);
       b++;
    }
}
