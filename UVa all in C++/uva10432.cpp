#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,r,n;
   while(scanf("%lf%lf",&r,&n)!=EOF){
    b=asin(1)*4;
    a=b/n;
    c=.5*r*r*sin(a)*n;
    printf("%.3lf\n",c);
   }
  return 0;
}
