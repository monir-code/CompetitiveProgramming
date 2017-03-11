#include <bits/stdc++.h>
using namespace std;

int main()
{
   double a,b,c,d,h,m;
   char ch ;
   while(1){
     scanf("%lf%c%lf",&h,&ch,&m);
     if(h==0&&m==0)return 0;
    a=h*30;
    b=m*5.5;
    if(a>b)
        c=a-b;
    else c=b-a;
    if(c>180)c=360-c;
    printf("%.3lf\n",c);
   }

}
