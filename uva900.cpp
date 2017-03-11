#include<stdio.h>
int main()
{
    long long a,l,b,i,j,k,c,n;
    while(scanf("%lld",&n))
    {
        if(n==0)return 0;
        a=1;
        b=1;
        if(n==1)
            printf("%lld\n",a);
        else{
        while(n--)
        {

            c=a+b;
            a=b;
            b=c;
        }
        printf("%lld\n",a);
        }
    }
}
