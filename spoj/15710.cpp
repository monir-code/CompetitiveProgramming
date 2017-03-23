#include<stdio.h>
int main()
{
    long long unsigned a,b,i,sum;
    scanf("%llu %llu",&a,&b);
    sum=0;
    for(i=a;i<=b;i++)
    {
        sum=sum+i*i;
    }
    printf("%llu",sum);
}
