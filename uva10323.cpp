#include<stdio.h>
long long fact(long long n)
{
    if(n==1)return 1;
    else return fact(n-1)*n;
}
int main()
{
    long long a,b,n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<8&&n%2==-1)printf("Overflow!\n");
        else if(n<8)printf("Underflow!\n");
        else if(n>13)printf("Overflow!\n");
        else {
            a=fact(n);
            printf("%lld\n",a);
        }
    }
    return 0;
}
