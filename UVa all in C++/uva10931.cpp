#include<stdio.h>
#include<string.h>
void mape(long long n)
{
     long long s,i,a,j,k,l;
     char str[10001],ch[10001],ch1[10001];


        s=0;
        i=0;
         while(n>0)
         {
             a=n%2;
             str[i]=a+48;
             s+=a;
             n/=2;
          i++;
         }
         for(j=0;j<i;j++)
         ch[j]=str[i-j-1];

         printf("The parity of ");
         for(j=0;j<i;j++)
            printf("%c",ch[j]);
         printf(" is %lld (mod 2).\n",s);
}
int main()
{
    long long n,s,i,a,j,k,l;

    while(scanf("%lld",&n))
    {
        if(n==0) return 0;
        mape(n);
    }
}
