#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,r,d,x,y,k,h,x1,y1;

    cin >> a >> b >> c;
    x=(c*c+a*a-b*b)/(2*c);
    y=sqrt(a*a-x*x);
    //x1=x/2;y1=y/2;
    k=(-x*y)/4+x*y;
    h=(x/2)*(x-c)-(y*y)/2+c*y;
    cout << x << " "<< y << " " << h << " " << k << endl;

    y1=((x*y-k)*(c-x)/(y*(1+h-c*y)));
    if(y1<0)y1=-y1;
    x1=(k-x*y)/y1;
    cout << x1 << " "<< y1 << endl;

    r=sqrt(x1*x1+y1*y1);
    cout << r << endl;

}
