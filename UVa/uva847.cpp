#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    ull a,n,b,v,c,i,j,k;

    while(scanf("%llu",&n)!=EOF)
    {
           a=1;
           b=0;
           c=1;
           while(c<n)
           {
               if(a)
               {
                   c*=9;
                   a=0;
                   b=1;
               }
               else{
                c*=2;
                a=1;
                b=0;
               }
           }
            if(n==1)printf("Stan wins.\n");
           else if(a)printf("Ollie wins.\n");
           else printf("Stan wins.\n");

    }
}
