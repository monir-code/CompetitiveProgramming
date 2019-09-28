#include<stdio.h>
int main()
{
    int n,a;
    while(scanf("%d",&n))
    {
        if(n==0)return 0;
        a=n/2;
        printf("%d\n",a);
    }
    return 0;
}
