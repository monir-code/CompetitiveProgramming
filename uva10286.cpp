#include<stdio.h>
int main()
{
    double a,b;
    while(scanf("%lf",&a)!=EOF)
    {
        b=a*1.067395681711182;
        printf("%.10lf\n",b);
    }
    return 0;
}
