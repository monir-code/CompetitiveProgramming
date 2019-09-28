#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,i,t,c;
    double r;
    while(scanf("%ld%ld",&a,&b))
    {
        c=0;
        if(a==0&&b==0)return 0;
        for(i=a;i<=b;i++)
        {
            r=sqrt(i);
            t=(int)r;
            if(t==r)c++;
        }
        printf("%ld\n",c);
    }
    return 0;
}
