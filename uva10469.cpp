#include<stdio.h>
unsigned long dtb(unsigned long n)
{
    unsigned long d,r,a;
       d=1;
       r=0;
        while(n>0)
        {
            r=n%2*d+r;
            n/=2;
            d*=10;
        }
       return r;
}
unsigned long sum(unsigned long a,unsigned long b)
{
    unsigned long s=0,r=1;
    while(a>0||b>0)
    {
        if(a%10+b%10==1)
            s+=r;
            r*=10;
            a/=10;
            b/=10;

    }
    return s;
}
unsigned long btd(unsigned long n)
{
    unsigned long r,s,d;
    r=1;
    s=0;
    while(n>0)
    {
        s=n%10*r+s;
        d=s;
        n/=10;
        r*=2;
    }
    return d;
}
int main()
{
    unsigned long i,j,k,a,b,s,m,n,r;
    while(scanf("%lu %lu",&a,&b)!=EOF)
    {
        m=dtb(a);
        n=dtb(b);
        s=sum(m,n);
        r=btd(s);
        printf("%lu\n",r);
    }
    return 0;
}
