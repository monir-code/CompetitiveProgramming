#include<stdio.h>
int main()
{
    long long n,i,j,s,a,c;
    while(scanf("%lld",&n))
    {
        if(n<0)return 0;
        s=0;
        c=1;
        while(n>0)
        {
            s=n%3*c+s;
            n/=3;
            a=s;
            c*=10;
        }
        printf("%lld\n",a);
    }
    return 0;
}
