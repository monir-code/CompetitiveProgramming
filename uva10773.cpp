#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f;
    long long t,i,j,k,l;
   scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        e=a/c;
        d=c*c-b*b;
        if(d<=0||b==0||c==0)printf("Case %lld: can't determine\n",i);
        else{
            d=sqrt(d);
            d=a/d;
            d-=e;
            printf("Case %lld: %.3lf\n",i,d);
        }
    }
}
