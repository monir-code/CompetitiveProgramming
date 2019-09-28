#include<stdio.h>

int main()
{
    long long a,b,c,d,n,i;

    while(scanf("%lld",&n)){
            if(n==-1)return 0;
      a=1;
      b=1;
      c=2;
    for(i=0;i<n;i++)
    {
        a=b;
        b=c;
        c=a+b;
    }
      b--;
      c--;
         printf("%lld %lld\n",b,c);

    }
}
