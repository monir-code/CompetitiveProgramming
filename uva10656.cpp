#include<stdio.h>
int main()
{
    int a,b,c,t,i,n,ara[1001];
    while(scanf("%d",&n))
    {
        c=0;
        b=1;
        if(n==0)return 0;
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<n;i++)
        {
            if(ara[i]>0)c++;

        }
        for(i=0;i<n;i++)
        {
            if(ara[i]>0){
            printf("%d",ara[i]);
           if(b!=c)
            printf(" ");
            b++;
            }
        }

        printf("\n");
    }
    return 0;
}
