#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(c!=0)printf("\n");
        c++;
        if(a>b)
        {
            a^=b;
            b^=a;
            a^=b;
        }
        for(i=a+1;i<=b+1;i++)
            printf("%d\n",i);
    }
}
