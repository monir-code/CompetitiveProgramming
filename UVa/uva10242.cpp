#include<stdio.h>
int main()
{
    double a,i,j,b,x1,x2,x3,y1,y2,y3,c,d,e,f,g,h,x,y,k,l,m,n;
    while(scanf("%lf",&a)!=EOF){
        scanf("%lf%lf%lf%lf%lf%lf%lf",&b,&c,&d,&e,&f,&g,&h);
        if(a==c&&b==d){x2=a;y2=b;x1=e;y1=f;x3=g;y3=h;}
        else if(a==e&&b==f){x2=a;y2=b;x1=c;y1=d;x3=g;y3=h;}
        else if(a==g&&b==h){x2=a;y2=b;x1=c;y1=d;x3=e;y3=f;}
        else if(c==e&&d==f){x2=c;y2=d;x1=a;y1=b;x3=g;y3=h;}
        else if(c==g&&d==h){x2=c;y2=d;x1=a;y1=b;x3=e;y3=f;}
        else if(g==e&&h==f){x2=e;y2=f;x1=a;y1=b;x3=c;y3=d;}

        k=(x1+x3)/2;
        l=(y1+y3)/2;
        m=k-x2;
        n=l-y2;
        x=k+m;
        y=l+n;
        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;
}
