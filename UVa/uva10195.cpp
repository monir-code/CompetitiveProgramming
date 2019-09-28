/*#include <bits/stdc++.h>
using namespace std;
#define pi 2*acos(0)
int main()
{
    double a,b,c,r;
    long long i,j,k;

   // while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
    a=8;b=12;c=8;

        a*=4;
        a/=pi;
        //a/=pi;a*4;
        a=sqrt(a);
        b=pi*2.828;
        printf("%lf %lf %lf\n",a,pi,b);
    }
}*/
#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,r,s;
while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
    if(a==0 || b==0 || c==0)
    printf("The radius of the round table is: 0.000\n");
    else
        {
        s=(a+b+c)/2;
        r=(s-a)*(s-b)*(s-c)/s;
        r=sqrt(r);
        printf("The radius of the round table is: %.3lf\n",r);
        }
    }
}
