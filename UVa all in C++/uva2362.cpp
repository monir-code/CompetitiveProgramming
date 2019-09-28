#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l,s;
    while((scanf("%lf",&a))!=EOF)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
        s=a+b+c+d+e+f+g+h+i+j+k+l;
        s=s/12;
        printf("$%.2lf\n",s);
    }
    return 0;
}
