#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,n,i,j,k,l;

    while(cin >>n)
    {
        if (n==0)return 0;
        a=1;
        while(1)
        {
          if(a*a*a>n)break;
          a++;
        }
        a--;
       b=(n-(a*a*a))/(3*a*a);
       a+=b;
       printf("%.4lf\n",a);
    }
}
