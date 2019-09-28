#include<stdio.h>
long long apo(long long a,long long l)
{
    if(a==1)return 1;
    else if(a>l)return 0;
    else if(a&1)return apo(a*3+1,l)+1;
    else return apo(a/2,l)+1;
}
int main()
{
    long long a,b,l,j,k,n,i,c;
     k=1;
    while(scanf("%lld%lld",&a,&l))
    {
        if(a<0&&l<0)return 0;
        n=a;
        c=apo(a,l);
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",k,n,l,c);
        k++;
    }
      return 0;
}
