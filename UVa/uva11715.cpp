#include<stdio.h>
#include<math.h>
void aaa(double u,double v,double t)
{
    double s,a;
    s=(u+v)/2*t;
    a=(v-u)/t;
    printf("%.3lf %.3lf\n",s,a);
}
void bbb(double u,double v,double a)
{
    double s,t;
    t=(v-u)/a;
     s=(u+v)/2*t;
     printf("%.3lf %.3lf\n",s,t);
}
void ccc(double u,double a,double s)
{
    double q,t,v;
    q=sqrt(4*u*u+8*a*s);
    t=(q-(2*u))/(2*a);
    v=u+a*t;
    printf("%.3lf %.3lf\n",v,t);
}
void ddd(double v,double a,double s)
{
    double q,t,u;
    q=sqrt(4*v*v-8*a*s);
    t=(-q+(2*v))/(2*a);
    u=v-a*t;
    printf("%.3lf %.3lf\n",u,t);
}
int main()
{
    double a,b,c,d,i,j,k=1;
    while(scanf("%lf",&a))
    {
        if(a==0)return 0;
        scanf("%lf%lf%lf",&b,&c,&d);
        printf("Case %.0lf: ",k);
        if(a==1) aaa(b,c,d);
        else if(a==2) bbb(b,c,d);
        else if(a==3) ccc(b,c,d);
        else if(a==4) ddd(b,c,d);
        k++;
    }
}
