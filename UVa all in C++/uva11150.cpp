#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        b=a/2;
        b+=a;
        printf("%d\n",b);
    }
}
