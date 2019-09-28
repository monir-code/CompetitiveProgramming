#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int n,s,i,m,c,k,j,d,a,b;
    scanf("%llu",&n);
    for(j=0;j<n;j++)
    {
        scanf("%llu%llu",&a,&b);
         m=0;
        for(i=a;i<=b;i++)
        {

            c=0;
            s=sqrt(i);
           for(k=1;k<=s;k++)
           {
               if(i%k==0)
               {
                   c++;
                   if(i/k!=k)c++;

               }

           }
           if(c>m)
           {m=c;
            d=i;
           }
        }
        printf("Between %llu and %llu, %llu has a maximum of %llu divisors.\n",a,b,d,m);
    }
    return 0;
}

