#include<stdio.h>
int main()
{
    int a,b,n,t,i,ara[102];
    scanf("%d",&t);
    for(a=1;a<=t;a++)
    {

        scanf("%d",&n);
         scanf("%d",&ara[0]);
           b=ara[0];
        for(i=1;i<n;i++){
            scanf("%d",&ara[i]);
            if(b<ara[i])b=ara[i];
        }
            printf("Case %d: %d\n",a,b);
    }
}
