#include <bits/stdc++.h>
using namespace std;

int main()
{
        double a,b,c,d,a1,b1,c1,d1,c2,d2,x,y,x1,x2,x3,y1,y2,y3,r;

       while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){

        a=y1-y2;
        b=x2-x1;
        a1=y2-y3;
        b1=x3-x2;
        c1=(x1+x2)/2;
        d1=(y1+y2)/2;
        c2=(x2+x3)/2;
        d2=(y2+y3)/2;
        c=b*c1-a*d1;
        d=b1*c2-a1*d2;

        x=(c*a1-d*a)/(a1*b-a*b1);
        y=(b*x-c)/a;

        r=(x-x1)*(x-x1)+(y-y1)*(y-y1);
        r=sqrt(r);
        a=2*x;b=2*y;

        c=r*r-x*x-y*y;
        x=-x;y=-y;
        a=-a;b=-b;c=-c;
        printf("(x ");
        if (x<0){x=-x;
             printf("- %.3lf)^2 + (y ",x);
        }
        else {
             printf("+ %.3lf)^2 + (y ",x);
        }
        if (y<0){y=-y;
             printf("- %.3lf)^2",y);
        }
        else {
             printf("+ %.3lf)^2",y);
        }
        printf(" = %.3lf^2\n",r);

        printf("x^2 + y^2 ");
        if(a<0){
            a=-a;
            printf("- %.3lfx ",a);
        }
        else{

            printf("+ %.3lfx ",a);
        }
         if(b<0){
            b=-b;
            printf("- %.3lfy ",b);
        }
        else{

            printf("+ %.3lfy ",b);
        }
         if(c<0){
            c=-c;
            printf("- %.3lf = 0\n",c);
        }
        else{

            printf("+ %.3lf = 0\n",c);
        }
        printf("\n");
       }
}
