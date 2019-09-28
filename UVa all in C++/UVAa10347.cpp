#include<stdio.h>

#include<math.h>

int main()
{
    double d,b,c,j,x,y,z,s,m,r=-1;
    while(scanf("%lf%lf%lf",&x,&y,&z)!=EOF)
    {
                m=(x+y+z)/2.0;
        s=sqrt(m*(m-x)*(m-y)*(m-z))*4/3.0;
        if((s<=0)||x<=0||y<=0||z<=0||x>=y+z||y>=x+z||z>=x+y)s=r;
        printf("%.3lf\n",s);

    }
}

