#include <bits/stdc++.h>
using namespace std;
#include <math.h>
int main()
{
    double r1,r2,r3,a,b,c,l,m,n,pi,r,s,A,B,C;
    int t,i,j,k;
    cin >> t;
    while(t--)
    {
        cin >> r1 >> r2 >> r3;
        a=r1+r2;
        b=r2+r3;
        c=r1+r3;
        s=(a+b+c)/2;
        s=s*(s-a)*(s-b)*(s-c);
        s=sqrt(s);

        A=acos((b*b+c*c-a*a)/(2*b*c));
        B=acos((a*a+c*c-b*b)/(2*a*c));
        C=acos((a*a+b*b-c*c)/(2*a*b));
        pi=asin(1)*2;
        l=A/pi/2;m=B/pi/2;n=C/pi/2;
        A=pi*r3*r3;B=pi*r1*r1;C=pi*r2*r2;
        A*=l;
        B*=m;
        C*=n;
        r=A+B+C;

        r=s-r;
       printf("%.6lf\n",r);
    }
}
