#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,t;
      while(scanf("%lld",&n)){
            if(n==0)return 0;
       if(n<0)
       {
         printf("%lld = -1 x ",n);
         n=-n;
       }
       else
       {
         printf("%lld = ",n);
       }
       for(i=2;i*i<=n;)
       {
         if(n%i==0)
         {
            printf("%lld x ",i);
            n=n/i;
            //t=i;
            i--;
         }
         i++;
       }
       printf("%lld\n",n);

}

}







