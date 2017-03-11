#include <stdio.h>
int main()
{
    int a,b,c,i,ara[10];
    while(scanf("%d",&a)!=EOF)
    {
        c=0;
        for(i=0;i<5;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]==a)c++;
        }
        printf("%d\n",c);
    }
}
