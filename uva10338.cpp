#include<stdio.h>
#include<string.h>
unsigned long long fact(unsigned long long n)
{
    if(n<=1)return 1;
   else return fact(n-1)*n;
}
int main()
{
    unsigned long long n,s,i,j,r,k,ln,l,a,b,c[100];
    char str[21];
    scanf("%llu",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",str);
        ln=strlen(str);
        for(j='A';j<='Z';j++)
            c[j]=0;
         for(j='A';j<='Z';j++)
         {
             for(k=0;k<ln;k++)
                if(str[k]==j)
             {
                 c[j]++;
             }
         }
        for(j='A';j<='Z';j++)
            c[j]=fact(c[j]);
        l=1;
        for(j='A';j<='Z';j++)
            l*=c[j];
            ln=fact(ln);
            r=ln/l;
            printf("Data set %llu: %llu\n",i,r);
    }
}
