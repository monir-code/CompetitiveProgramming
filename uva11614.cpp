# include <stdio.h>
# include <math.h>
int main()
{
    long long i,n,t,sum;
   scanf("%lld",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%lld",&n);
       sum = (sqrt(1+8*n)-1)/2;
       printf("%lld\n",sum);
   }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long t,a,b,c,i,j,s;
    cin >> t;
    for(j=0;j<t;j++)
    {
        cin >> a;
        s=0;
        i=0;
        if(a>10000020330)
        {
           s=10000020331;
           i=141421;
        }
        while(s<a)
        {
            s+=i;
            i++;
        }
      if(s>a)i--;
        printf("%llu %llu\n",i,s);
    }
}
*/
