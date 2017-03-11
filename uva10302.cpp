#include<stdio.h>
int main()
{
    long long a,b,c,i,s;
    while((scanf("%lld",&a))!=EOF)
    {
        s=0;
        for(i=1;i<=a;i++)
        {
            s+=i*i*i;
        }
        printf("%lld\n",s);

    }
    return 0;
}
