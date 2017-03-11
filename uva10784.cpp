#include<stdio.h>
#include<math.h>
int main()
{
    long long b,a,i=1;
    double r;
    while(i<1001)
    {
        scanf("%lld",&a);
        if(a==0)return 0;
           r=9+8*a;
           r=sqrt(r);
           r+=3;
           r/=2;
           b=(int)r;
           r=r-b;
          if(r>0)printf("Case %lld: %lld\n",i,b+1);
          else printf("Case %lld: %lld\n",i,b);
          i++;
    }
    return 0;
}
