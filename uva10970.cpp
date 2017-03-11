#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&c)!=EOF)
    {
        b=a*c-1;
        printf("%d\n",b);
    }
}
