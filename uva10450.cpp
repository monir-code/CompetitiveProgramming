#include<stdio.h>
int main()
{
    long long d,a,x,l,b,i,j,k,c,n;
    scanf("%lld",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%lld",&n);
        a=1;
        b=1;
        d=n;
        while(n--)
        {
            c=a+b;
            a=b;
            b=c;
        }
        if(d==0)b=0;
        if(d==1)b=2;
        printf("Scenario #%lld:\n%lld\n",i,b);
        printf("\n");
    }
}
