#include<stdio.h>
int main()
{
    long long a,b,c,d,i,t,j,r,ara[101];
    scanf("%lld",&t);
            for(i=0;i<t;i++){
                    scanf("%lld",&a);
           c=0;
           while(1){
            b=0;
            c++;
            d=a;
            while(a>0)
            {
                b=a%10+b;
                r=b;
                b*=10;
                a/=10;
            }
              if(d==r)break;
            if(d!=r)a=d+r;
           }
           c--;
           printf("%lld %lld\n",c,r);
            }

    return 0;
}

