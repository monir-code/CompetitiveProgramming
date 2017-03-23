#include<stdio.h>
int main()
{
    int n,m,i,sum1,sum2,s[300],q[300];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&q[i]);
    }
    sum1=0;
    for(i=0;i<n;i++)
    {
        sum1=sum1+s[i];
    }
    sum2=0;
    for(i=0;i<m;i++)
    {
        sum2=sum2+q[i];
    }
    if(sum1>sum2)
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",s[i]);
        }
    }
    else
    {
        for(i=0;i<m;i++)
        {
            printf("%d ",q[i]);
        }
    }
}
