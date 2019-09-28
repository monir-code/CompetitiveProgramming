#include<stdio.h>
#include<math.h>
int main()
{
    double p,a,b,n,l,r;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&l);
        r=l/5;
        p=asin(1)*2;
        b=p*r*r;
        a=(l*6)/10*l;
        a=a-b;
        printf("%.2lf %.2lf\n",b,a);
    }
}
