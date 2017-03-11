#include<stdio.h>
int main()
{
    long long a,b,t;
    while(1)
    {
        scanf("%lld",&t);
        if(t==0)return 0;
        a=t-10;
        if(t<=101)printf("f91(%lld) = %lld\n",t,91);
        else if(t>101)printf("f91(%lld) = %lld\n",t,a);
    }
    return 0;
}
