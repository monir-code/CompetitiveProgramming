#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,i;
    while((scanf("%lf",&a)!=EOF))
    {
        scanf("%lf",&b);
        c=pow(b,1/a);
        printf("%.0lf\n",c);
    }
    return 0;
}
