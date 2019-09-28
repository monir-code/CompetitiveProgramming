#include<stdio.h>
int main()
{
    float a,b,c,a1,b1,c1,x,y,d,e;
    while(scanf("%f%f%f%f%f%f",&a,&b,&c,&a1,&b1,&c1))
    {
       if(a==0&&b==0&&c==0&&a1==0&&b1==0&&c1==0)return 0;
        d=a*b1-a1*b;
        x=(b1*c-b*c1)/d;
        y=(a*c1-a1*c)/d;
        if(y==-0)y=0;
        e=a*x+b*y-c;
        if(e<0)e=-e;
        if(e<=5)
            printf("The fixed point is at %.2f %.2f.\n",x,y);
       else
        printf("No fixed point exists.\n");
    }
    return 0;
}
