#include<stdio.h>
int main()
{
    long long n,m,i,arr[1000],ary[1000],x;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%lld",&ary[i]);
    }
    if(n<m)
        x=n;
    else
        x=m;
    for(i=0;i<x;i++)
    {
        if(arr[i]==ary[i])
        {
            printf("%lld ",i+1);
        }
    }
}
