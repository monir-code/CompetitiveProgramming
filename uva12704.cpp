#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,j,d,e;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        j=a*a+b*b;
        j=sqrt(j);
        d=c-j;
        e=c+j;
        printf("%.2lf %.2lf\n",d,e);
    }
}
