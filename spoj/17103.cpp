#include<stdio.h>
int main()
{
    long long i,j,k,n,m,arr[1000],ary[1000],count,t;
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
    count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i]==ary[j])
            {
                arr[count]=arr[i];
                count++;
                break;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%lld ",arr[i]);
    }
}

