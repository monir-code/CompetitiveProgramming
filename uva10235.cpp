#include<stdio.h>
#include<math.h>
int main()
{
    long int b,s,c,d,n,a,i,p,j;
   while(scanf("%ld",&n)!=EOF){
    a=0;
    b=n;
    while(b>0)
    {
        a=b%10+a;
        s=a;
        a*=10;
        b/=10;
    }
   c=1;
   d=1;
   if(n%2==0)c=0;
   if(n==2)c=1;
   p=sqrt(n);
   for(i=3;i<=p;i++)
   {
       if(n%i==0)
       {
           c=0;
           break;
       }
   }
   if(s==n)d=0;

   if(c==1&&s!=n)
   {
       if(s%2==0)d=0;
       if(s==2)d=1;
        p=sqrt(s);
   for(i=3;i<=p;i++)
   {
       if(s%i==0)
       {
           d=0;
           break;
       }
   }
   }
   if(c==0)printf("%ld is not prime.\n",n);
   else if(c==1&&d==0)printf("%ld is prime.\n",n);
   else printf("%ld is emirp.\n",n);
}
 return 0;
}
